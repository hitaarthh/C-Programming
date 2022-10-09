#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    printf("Enter no of blocks:\n");
    scanf("%d",&n);

    int memory[n];
    printf("Enter memory of blocks:\n");
    for(int i = 0; i<n; i++){
        scanf("%d",&memory[i]);
        
    }

    int p;
    printf("Enter no of blocks:\n");
    scanf("%d",&p);

    int process[p];
    printf("Enter memory of blocks:\n");
    for(int i = 0; i<p; i++){
        scanf("%d",&process[i]);
    }

    for(int i = 0; i<p; i++){
        
        int min = INT_MAX;
        int min_index = -1;
        for(int j = 0; j<n; j++){
            if(process[i]<=memory[j] && memory[j]<min){
                min = memory[j];
                min_index = j;
            }
        }
        if(min != INT_MAX){
            printf("Memory block %d allocated for %d process\n",min_index+1, i+1);
            memory[min_index] = memory[min_index] - process[i];
        }
        else
            printf("No memory block free for process %d\n",i+1);
    }
    return 0;
}