#include <stdio.h>

int product(int a, int b){
    if (a<b){
        return product(b,a);
    }
    else if (b!=0){
        return (a + product(a, b - 1));
    }
    else{
        return 0;
    }
}

int main(){

    int n,m,result;
    printf("Enter the two numbers: ");
    scanf("%d %d", &n, &m);
    result=product(n,m);

    printf("The result is: %d",result);
    return 0;
}
