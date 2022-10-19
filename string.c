#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    int i=0, j, chk;
    printf("Enter a String: ");
    gets(str);
    while(str[i]!='\0')
    {
        chk=0;
        if(str[i]==' ')
        {
            j=i;
            while(str[j-1]!='\0')
            {
                str[j] = str[j+1];
                j++;
            }
            chk = 1;
        }
        if(chk==0)
            i++;
    }
    printf("\nString (without spaces): %s", str);
    getch();
    return 0;
}
