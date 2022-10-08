#include <stdio.h>

int main()
{
    char string1[20]="Hello world";
    char string2[20];
    printf("String1: %s\n",string1);
    
    for (int i=0; i<10;i++){
        scanf("%c ",&string2[i]);
    }
    printf("String2: %s",string2);
    return 0;
}
