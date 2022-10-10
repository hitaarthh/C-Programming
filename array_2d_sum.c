#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],i,j,sum=0;
  printf("Enter 9 Elements: ");
  for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
     {
      scanf("%d",&a[i][j]);
     }
   }
   for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
      {
      sum=sum+a[i][j];
      }
    }
  printf("Sum of All Elements in Array = %d",sum);
}