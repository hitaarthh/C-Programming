
#include <iostream>
using namespace std;
int F[100];
int fib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 1] == -1)
            F[n - 1] = fib(n - 1);
        if (F[n - 2] == -1)
            F[n - 2] = fib(n - 2);
        F[n] = F[n - 1] + F[n - 2];
        return F[n - 1] + F[n - 2];
    }
}
int main()
{
    int n = 0;
    cout << "Enter how many numbers you want to print : ";
    cin >> n;
    for (int i = 0; i < 100; i++)
    {
        F[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }

    return 0;
}
