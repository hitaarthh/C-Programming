#include <stdio.h>
//Given a 5-digit integer number. 
//Write a program to print it in reverse order  
int main()
{
int number,i;
printf("Enter the number:");
scanf("%d",&number);

while(number!=0){
	i=number%10;
	printf("%d",i);
	number/=10;
}
printf(" :is the reversed number");
return 0;
}
