#include<stdio.h>
#include<conio.h>
void transpose(int *, int *, int, int);
void main()
{
  int a[10][10], R, C, i, j;
  int b[10][10], temp;
  printf("Enter Number of Rows: ");
  scanf("%d", &R);
  printf("Enter Number of Columns: ");
  scanf("%d", &C);
  printf("Enter %d Elements: ", R * C);
  for (i = 0; i < R; i++)
    for (j = 0; j < C; j++)
      scanf("%d", &a[i][j]);
  transpose(a, b, R, C);
  printf("Transpose of Matrix:\n");
  for (i = 0; i < R; i++)
  {
    for (j = 0; j < C; j++)
    {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }
  getch();
}
void transpose(int *src, int *dest, int rows, int cols)
{
  int i, j;
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      dest[] = src[];
    }
  }
}