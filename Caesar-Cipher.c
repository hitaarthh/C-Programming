#include <stdio.h>
#include<stdlib.h>
int main(){
    int N,K; 
    scanf("%d",&N);
    unsigned char* S = (char *)malloc(10240 * sizeof(char)); //malloc () is used for dynamic memory allocation. 
    scanf("%s",S);
    scanf("%d",&K);
    for(int i=0;i<N;i++)
        {
        if(S[i] >= 97 && S[i] <= 122) //For small letters
            {
            S[i]=S[i]+K; //ASCII value increasing.
            while(S[i]>122)
                S[i]=(S[i]%122)+97-1; //after z it will start from a agin.
            
            }
        else if(S[i] >= 65 && S[i] <= 90) //For capital letters
            {
            S[i]=S[i]+K;
            while(S[i]>90)
                S[i]=(S[i]%90)+65-1;  // after Z it will start from A again.
            }   
        }   printf("%s",S);
    return 0;
}
