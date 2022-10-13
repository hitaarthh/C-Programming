//Write a program to input temperature in Celsius & to print its Fahrenheit equivalent. F = C * (9/5) + 32.
#include<stdio.h>
int main()
{float F,C;
 printf("The temperature in Celsius is\t");
 scanf("%f",&C);
 F = (C *9/5) + 32;
 printf("The temperature in Fahrenheit is\t%f",F);
 return 0;
}
