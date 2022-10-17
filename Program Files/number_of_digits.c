//a function that will take an integer as parameter and will return number of digits on it.

#include <stdio.h>

int totalDigit(int);

int main(void)
{
  int n;
  printf("Please enter and integer:");
  scanf("%i", &n);
  int count = totalDigit(n);
  printf("Total digit in the number : %i", count);
  
  return 0;
}

int totalDigit(int num)
{
  int remainder, counter = 0;
  while(num != 0)
  {
    remainder = remainder % 10;
    counter++;
    num = num / 10;
  }
return counter;
}
