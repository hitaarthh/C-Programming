#include <stdio.h>

int n;
int checkDuplicate(int arr[], int element)
{
    int p = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == element)
            p++;
    if (p > 1)
        return 1;
    else
        return 0;
}

void findPosition(int arr[], int element)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == element)
            printf("%d ", i);
}
int main()
{
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        int key=0;
    for (int i = 0; i < n; i++)
        if (checkDuplicate(arr, arr[i]) == 1)
        {
            printf("The repeated element is: %d and it is at the index: ", arr[i]);
            findPosition(arr, arr[i]);
            printf("\n");
            // break;
        }
    return 0;
}
