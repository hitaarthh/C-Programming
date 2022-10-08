#include<stdio.h>
int main()
{
    int a,b,i=0;
    scanf("%d\t%d",&a,&b);
    while(a<=b)
    {
        a*=3;
        b*=2;
        i++;
    }
    printf("%d",i);
    return(0);
}


