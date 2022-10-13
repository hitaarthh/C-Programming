#include<stdio.h>
int main()
{
    int a[3][3];
    printf("Enter the number to array 'a':\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    int b[3][3];
    printf("Enter the number to array 'b':\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    int m[3][3];
    printf("The product of the two matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m[i][j]=0;
            for(int k=0;k<3;k++)
            {
                m[i][j]=m[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

return 0;
}
