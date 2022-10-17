#include <stdio.h>
int main(void)
{
 char letter;
 printf("Please enter a letter from English alphabet:");
 scanf("%c", &letter);
 int ascii = letter;
 if(ascii >= 65 && ascii <=90)
 {
 printf("Uppercase letter!");
 }
 else if(ascii >= 97 && ascii <= 122)
 {
 printf("Lowercase letter!");
 }
 else
 {
 printf("Invalid input!");
 }
 return 0;
}
