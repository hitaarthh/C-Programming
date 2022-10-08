#include <stdio.h>
int search(int arr[], int n, int key)
{
    int p = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            p++;
    return p;
}
void duplicateCheck(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int result = search(arr, n, arr[i]);
        if (result > 1)
            printf("%d ", i);
    }
}
int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Index of the duplicated element is : ");
    duplicateCheck(arr, n);
}
