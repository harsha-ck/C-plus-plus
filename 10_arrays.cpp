//insertion
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 20, 40, 50};
    int pos = 2;
    int value = 30;
    int n = 4;
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
//deletion
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 20, 40, 50};
    int pos = 2;
    int n = 4;
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
