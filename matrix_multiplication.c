#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("Enter the elements of the first matrix: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int s=0;
    int c[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                s=s+a[i][k]*b[k][j];
            }
            c[i][j]=s;
            s=0;
        }
    }
    printf("The product of the two matrices is: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}