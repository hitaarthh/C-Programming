#include <stdio.h>
int main(){
	int i,factorial=1;
	scanf("%d",&i);
	for (int j=1; j<=i; j++)
		factorial*=j;
	printf("%d",factorial);
	return 0;
}
