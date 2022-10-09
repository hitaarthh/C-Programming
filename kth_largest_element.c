#include <stdio.h>  
#include <stdlib.h>  
  
// Compare function for the qsort  
int cmp_func (const void * a, const void * b) {  
   return ( *(int*)a - *(int*)b );  
}  
  
// Function that reverses the array  
void reverse (int arr[], int n){  
    for(int i = 0; i < n/2; i++){  
        int temp = arr[i];  
        arr[i] = arr[n-i-1];  
        arr[n-i-1] = temp;  
    }  
}  
  
// Function that returns the Kth largest element  
int kth_largest_element(int arr[], int k, int n){  
    // Sorts the array  
    qsort(arr, n, sizeof(int), cmp_func);  
  
    // Reverses the array  
    reverse(arr, n);  
  
    // Returns the required element  
    return arr[k-1];  
}  
  
int main(){  
    // Given array  
    int arr[] = {12, 15, 7, 3, 8, 16, 25};  
      
    // n represents the size of the array  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    int k = 4;  
    printf("The %dth largest element = %d", k, kth_largest_element(arr, k, n));  
    return 0;  
}  
