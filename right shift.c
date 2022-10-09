#include<stdio.h>

int main(){
    int a,b,c;
    printf("LEFT SHIFT BY 2 POSITIONS!!\n");
    printf("Enter a number:");
    scanf("%d",&a);
    b = a>>1;
    c = a>>2;
    printf("%d\n%d",b,c);
}
