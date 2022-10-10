#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n;
	int count=0;
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
	    scanf("%d",&n);
	    for(int i=1; i>=n; i++)
	    {
	        for(int j=n; j>0; j--)
	        {
	            if((i+j)%2!=0)
	            {
	                count++;
	            }
	        }
	    }
	    printf("%d",count);
	}
	return 0;
}

