#include <stdio.h>
#include <string.h>
int main(){
    char a1[100] = {};
    char a2[100] = {};
    char a3[200] = {};
    int i = 0, j = 0;
    printf("Enter a string: \n");
    scanf("%s", a1);
    printf("Enter another string: \n");
    scanf("%s", a2);
  // Insert the first string in the new string
    while (a1[i] != '\0') {
        a3[j] = a1[i];
        i++;
        j++;
    }
    // Insert the second string in the new string
    i = 0;
    while (a2[i] != '\0') {
        a3[j] = a2[i];
        i++;
        j++;
    }
    a3[j] = '\0';
    printf("The concatinated string is without using the function is: %s", a3);
    strcat(a1, a2);
    printf("\nThe concatinated string using the function is: %s", a1);
    retur
