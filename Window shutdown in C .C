#include<stdio.h>
#include<stdlib.h>    

int main()
{
    printf("window will shut down");

    char ch;
    
    printf("Do you want to shutdown your pc now (y/n)?");
    scanf("%c", &ch);

    if(ch == 'y'|| ch == 'Y')
    {   /*
         
        */
        system("C:\\WINDOWS\\System32\\shutdown /s");
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
