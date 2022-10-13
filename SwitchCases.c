#include <stdio.h>

int main(){
int a=1;
switch (a << (2+a)){
default:
printf("1");
case 4:
printf("2");
case 5:
printf("3");
case 8:
printf("4");
}
return 0;
}
