// Write a C program to input marks of four subjects Physics, Chemistry, Biology, and
// Mathematics. Calculate percentage and grade according to following

#include <stdio.h>

int main()
{
    int arr[4];
    int sum;
    int percent;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks: ");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    percent = (sum / 4);
    if (percent >= 90)
        printf("U got GRADE A");
    else if (percent >= 80 && percent < 90)
        printf("U got GRADE B");
    else if (percent >= 70 && percent < 80)
        printf("U got GRADE C");
    else if (percent >= 60 && percent < 70)
        printf("U got GRADE D");
    else if (percent >= 40 && percent < 60)
        printf("U got GRADE E");
    else
        printf("U got GRADE F");

    return 0;
}
