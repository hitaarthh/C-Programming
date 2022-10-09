#include <stdio.h>
int main()
{
    int rem,s,n;
    scanf("%d", &n);
    while (n!=0)

{
  rem = n%10;
  s= s+rem;
  n=n/10;
}

printf("%d",s);

}
