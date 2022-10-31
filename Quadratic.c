// Write a C program to solve Quadratic Equation.

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the coieffient(a,b,c):");
    scanf("%d %d %d", &a, &b, &c);
    if (((b*b)-(4*a*c))>=0){
        if (((b*b)-(4*a*c))==0)
            printf("The roots of the quadratic equation are real and equal.");
        else
            printf("The roots of the quadratic equation are real but not equal.");
    }
    else
        printf("The roots of the quadratic equation are imaginary.");
    return 0;
}
