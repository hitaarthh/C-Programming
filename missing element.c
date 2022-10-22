#include<stdio.h>

int main(){
    int n,sum=0,sum1=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        sum1=sum1+a[i];
    }
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    printf("The missing element is %d",sum-sum1);
}
