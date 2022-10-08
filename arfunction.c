#include <stdio.h>
void search(int [],int,int);// Function prototype
int main()
{ 
const int SIZE=100;
int A[SIZE],n,i,element;
printf("Enter the limit: ");
scanf("%d",&n);
printf("Enter the array:\n");
for (i=0;i<n;i++)
 { 
 scanf("%d",&A[i]);
 } 
 printf("Enter the element to be searched");
 scanf("%d",&element); 
 search(A,n,element);   // Function Call 
 return(0);
 }
 
void search(int A[100],int limit,int element)
{
 int i;
 int found=0;
 for(i=0;i<limit;i++)
 {
    if(A[i]==element)
    {
       found=1;
       break;
    }
 }
 if(found==1)
  printf("Found %d at index %d",element,i);
 else
  printf("Element not found"); 
}
