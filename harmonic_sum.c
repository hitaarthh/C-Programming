// That accepts a number and find the harmonic sum of that number. (Hint: the
// harmonic sum of n is equal to the sum of reciprocals of positive integers up to n). For
// example, if n =3, HS = 1+1/2+1/3

#include <stdio.h>

double sum(int n)
{
    //double i, s = 0.0;
    if (n < 2)
        return 1;
    else
        return 1 / n + sum(n - 1);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum is %f", sum(n));
    return 0;
}
