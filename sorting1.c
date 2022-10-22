#include <stdio.h>

int main(){
    int a[5]={10,12,1,3,2},t,i,j;
    for(j=0;j<4;j++){
        for(i=0;i<4;i++){
            if (a[i]<a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<5;i++){
    printf("%d ",a[i]);
    }
    }
