#include <stdio.h>

int main()
{
    char string_1[20]="Hello guys";
    char string_2[20];
    printf("String1: %s\n",string_1);
    for (int i=0; i<10;i++)
        scanf("%c ",&string_2[i]);
    printf("String2: %s",string_2);
    return 0;
}
