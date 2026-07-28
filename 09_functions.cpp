//program 1
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

//program2
#include <iostream>
using namespace std;
int prime_check(int n);
int main()
{
    int result = prime_check(2);
    if (result == 1)
    {
        cout << "It's prime!";
    }
    else
    {
        cout << "It's not prime!";
    }
}
int prime_check(int n)
{
    if (n <= 1)
    {
        return -1;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return -1;
        }
    }
    return 1;
}
