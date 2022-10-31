// That accept an integer number, find if it is Disarium number or not (Hint: A number
// is said to be a Disarium number when the sum of its digit raised to the power of their
// respective position is equal to the number itself. Eg: 175 is a Disarium number, 11 +
// 72 + 53 = 175)

#include <stdio.h>
#include <math.h>

int disarim(int a, int m){
    int ans=0, n=0;
    while(a!=0){
        n = a%10;
        a/=10;
        ans += pow(n,m);
        --m;
    }
}

int main(){
    int num, sum, length;
    printf("Enter the number of digits in the number: ");
    scanf("%d",&length);
    printf("Enter a num: ");
    scanf("%d",&num);
    sum = disarim(num, length);
    if (sum == num)
        printf("%d is an disarium number",num);
    else
        printf("%d is not an disarium number",num);
    return 0;
}
