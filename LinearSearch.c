#include <stdio.h>

int main(){
    int a;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements of the array: ");
    for(int i=0; i<a; i++)
        scanf("%d",&arr[i]);
    int num;
    printf("Enter the element to be searched: ");
    scanf("%d",&num);

    for (int j=0; j<n; j++)
        if(num==arr[j]){
            printf("Element found!!");
            break;
    }
    return 0;
}
