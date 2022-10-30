#include <stdio.h>
int main()
{
    int a[10000],b[10000],i,j,n,c=0 ;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for(j=i+1; j<n; j++)
            {
               if(a[i]==a[j])
                {
                   c++;
                   a[j]=-1;
                }
           }
           b[i]=c;
        }
    }
    printf("unique numbers in the  array :\n");
    for(i=0; i<n; i++)
    {
        if(a[i]!=-1)
        {
            if(b[i]==1)
            printf("%d\n",a[i]);
        }
    }    
    return 0;
} 
