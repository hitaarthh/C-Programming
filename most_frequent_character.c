#include<stdio.h>

// Finding the most frequent character in a string

int main()
{
    char strg[1000];  
    int a[1000], i, j, k=0, count=0, n;
 
    printf("Enter any string: ");
    scanf("%s", &strg);
     
    for(j=0; strg[j]; j++) {
	  n = j;
     }
    
    for(i = 0; i < n; i++) {
    	a[i] = 0;
    	count = 1;

    	if(strg[i]) {
 		  for(j = i + 1; j < n; j++) {
	        if(strg[i] == strg[j]) {
                count++;
                strg[j]= '\0';
	      	}
	       }  
       }

	   a[i] = count;

	   if(count >= k) {
	   k = count;
      }
  	}

  	printf("The character occuring maximum: \n");

 	  for(j=0; j<n; j++) {
	        if(a[j] == k) {
	            printf("'%c', ", strg[j]);
	     	}
	   }  
     
   	printf("\b = %d number of times \n", k); 
    return 0;
}
