//WACP to swap two integer numbers without using 3rd Variable.
#include<stdio.h>
int main(){
int a,b;
printf("Enter the numbers:\n");
scanf("%d%d",&a,&b);
printf("value of a = %d \nvalue of b = %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
//b=(a+b)/2;
//a=a-b;
printf("After swaping the value of a = %d and the value of b = %d \n",a,b);
return 0;
}
