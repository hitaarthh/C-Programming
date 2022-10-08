#include <stdio.h>
int main(){
int i,j=0;
printf("EVEN ");
do{
if (i%2==0){
	printf("%d ",i);}
	++i;
}while (i<=50);

printf("\nODD ");
do{
if (j%2!=0){
	printf("%d ",j);}
	++j;
}while (j<=50);
return 0;
}
