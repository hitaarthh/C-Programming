#include <stdio.h>
int main()
{   int a=0;
    for (int i=0; i<5; i++){
        for (int j=0;j<i+1; j++){
            a+=1;
            if (j==0 || j==i || i==4){
                printf("%d ",a);}
            else
                printf("  ");}
        printf("\n");}

    return 0;
}
