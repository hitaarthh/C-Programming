#include <stdio.h>

/*
Write a program to read base & altitude of a triangle & print its area
*/

int main()
{
int base,altitude,area;
printf("Enter base and altitude:");
scanf("%d%d",&base,&altitude);
area=0.5*base*altitude;
printf("The area of triangle is: %d", area);
return 0;
}
