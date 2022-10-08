#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, a[10000], count=0, rev[1000], rem=0, i, j, copy;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++){
        copy=a[i];
        while (copy != 0) 
                { 
                    rem = copy % 10; 
                    rev[i] = rev[i] * 10 + rem; 
                    copy /= 10; 
                }
    }
    for(i=0; i<n; i++)
    {
        for(j=2; j<=n; j++)
        {
            if((a[i]%j==0) || (rev[i]%j==0)) 
            {
                count++;
            }
            // else if(rev[i]%j==0)
            // {
            //     count++;
            // }
        }
        if(count==1)
            {
                printf("%d ",a[i]);
            }
    }
    return 0;
}
