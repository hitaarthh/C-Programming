#include<stdio.h>
#include<conio.h>

int main()
{
  int a[3][3], i, j;
  int *p = a, temp;

  printf("Enter 9 Elements: ");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);

  printf("Given 2D Array:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d", a[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < 3; i++)
  {
    for (j = i + 1; j < 3; j++)
    {
      if (a[i][j] > a[i][j + 1])
      {
        temp = a[i][j];
        a[i][j] = a[i][j + 1];
        a[i][j + 1] = temp;
      }
    }
    printf("\n");
  }

  printf("Sorted 2D Array:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}