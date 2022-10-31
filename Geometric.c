// That accepts a number and find the sum of geometric series of that number. (Hint:
// Geometric series of 4 = 1+1/2+1/4+1/8)

#include <stdio.h>
#include <math.h>

double geometric(int n){
    if (n<2){
        return 1;
    }
    else{
        return 1/pow(2,n)+geometric(n-1);
    }
}

int main(){
    int n;
    printf("Enter a number n: ");
    scanf("%d",&n);
    printf("The geometric sum of the series is: %f", geometric(n-1));
}
