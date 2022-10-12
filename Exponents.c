#include <stdio.h>
#include <math.h>

int main()
{
double F,numerator,denominator;
numerator=(2.9678*pow(10,-27))+(0.876*pow(10,-38));
denominator=(7.025*pow(10,16))-(9.75*pow(10,12));
F=numerator/denominator;
printf("Evaluated answer: %e",F);
return 0;
}
