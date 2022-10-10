/*Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
Take an example of 153
sum of individual digit's cube is equal to 153.
*/
#include<stdio.h>  
int main()    
{    
  int n,rem,sum=0,temp;    
  printf("Enter a number to cheack for Armstrong Number = ");    
  scanf("%d",&n);    
  temp=n;    
  while(n>0)    
  {    
    r=n%10;    
    sum=sum+(r*r*r);    
    n=n/10;    
  }    
  if(temp==sum)    
  printf("\n%d is an Armstrong Number.",temp);    
  else    
  printf("\n%d is not an Armstrong Number.",temp);    
  return 0;  
}   
