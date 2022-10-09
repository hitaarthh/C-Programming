#include <stdio.h>  
  
int main(void) {  
  int a;  
  printf("Enter the odd number only");  
  scanf("%d", &a);  
  for(int i=1;i<=a;i++)  
  {  
    if(i==((a/2)+1))  
    {  
      for(int j=1;j<=a;j++)  
      {  
        printf("*");  
      }  
   
    }  
    else  
    {  
    for(int j=1;j<=a/2;j++)  
    {  
      printf(" ");  
    }  
    printf("*");  
    }  
    printf("\n");  
  }  
  return 0;  
}  
