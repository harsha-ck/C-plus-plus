//square
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of square:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;

//triangle
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the height of the triangle:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;

//inverted triangle
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the height of the triangle:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//pyramid
int main()
{
    int n;
    cout << "Enter the height of the pyramid: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}

