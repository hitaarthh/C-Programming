#include<stdio.h>
#include<limits.h>

struct page{
    int val, freq;
};

int main(){
    int num;
    printf("Enter no of pages:\n");
    scanf("%d",&num);

    struct page ref[num];
    printf("Enter reference string:\n");
    for(int i = 0; i<num; i++){
        scanf("%d", &ref[i].val);
        ref[i].freq = -1;
    }

    int f;
    printf("Enter frame number:\n");
    scanf("%d",&f);
    int counter = 0;

    struct page frame[f];
    for(int i = 0; i<f; i++){
        frame[i].val = -1;
    }

    for(int i = 0; i<num; i++){
        int flag = 1;
        for(int j = 0; j<f; j++){
            
            if(frame[j].val == -1){
                frame[j] = ref[i];
                frame[j].freq = 0;
                flag = 0;
                break;
            }
            
           
            else if(frame[j].val == ref[i].val){
                
                frame[j].freq = frame[j].freq + 1;
                flag = 0;
                break;
            }
        }
        for(int j = 0; j<f; j++){
            for(int k = 1; k<f; k++){
                
                if(frame[k - 1].freq > frame[k].freq){
                    
                    struct page temp = frame[k - 1];
                    frame[k - 1] = frame[k];
                    frame[k] = temp;
                }
            }
        }
        if(flag){
            frame[0] = ref[i];
            frame[0].freq = 0;
            for(int j = 1; frame[j].freq == 0 && j<f; j++){
                struct page temp = frame[j - 1];
                frame[j - 1] = frame[j];
                frame[j] = temp;
            }
        }
       
        for(int i = 0; i<f; i++){
            printf("%d", frame[i].val);
        }
        printf("\n");
    }
}