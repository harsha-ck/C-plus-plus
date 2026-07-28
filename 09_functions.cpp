#include <iostream>
using namespace std;
int factorial(int n);
int main()
{

    int result = factorial(3);
    cout << "Factorial:" << result;
    return 0;
}
int n;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
