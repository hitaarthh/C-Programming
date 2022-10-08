#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int num;
    printf("Enter the element to be searched: ");
    scanf("%d",&num);

    for (int j=0; j<n; j++){
        if(num==arr[j]){
            printf("Element found!!");
            break;
        }
    }
    return 0;
}
