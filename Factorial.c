#include <stdio.h>

// Recursive method

int factorial_recur(int num) {
	if (num == 0 || num == 1)
		return 1;
	return num * factorial_recur(num - 1);
}


// Iterative method

int factorial(int num) {
	int fac = 1;
	for (int x = 2; x <= num; x++)
		fac = fac * x;
	return fac;
}

int main()
{
	int num = 5;

	int fac = factorial(5);

	printf("Factorial of %d is %d", num, fac);

	return 0;
}