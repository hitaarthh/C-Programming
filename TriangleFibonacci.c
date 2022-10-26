#include<stdio.h>    
#include<stdlib.h>  
int main(){  
   int a=0,b=1,i,c,n,j;    
    printf("Enter the height of the triangle: \n");    
    scanf("%d",&n);    
    for(i=1;i<=n;i++)    
    {    
        a=0;    
        b=1;    
        printf("%d\t",b);    
        for(j=1;j<i;j++)    
        {    
            c=a+b;    
            printf("%d\t",c);    
            a=b;    
            b=c;    
        }    
        printf("\n");    
    }    
    return 0;  
}
