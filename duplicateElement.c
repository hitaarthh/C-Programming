#include <stdio.h>

int main()
{
  //Initialize array     
    int a[] = {9, 8, 2, 7, 3, 7, 8, 8, 3};     
    //Calculate length of array a    
    int n = sizeof(a)/sizeof(a[0]);    
    printf("Duplicate elements in given array: \n");    
    //Searches for duplicate element    
    for(int i = 0; i < n; i++) {    
        for(int j = i + 1; j < n; j++)     
            if(a[i] == a[j])    
                printf("%d\n", a[j]);    
    }
  return 0;
}
