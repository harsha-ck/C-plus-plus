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
//linear search
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int key;
    bool found = false;
    cout << "Enter the 5 elements:";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search:";
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index:" << i;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Element not found!";
    }

    return 0;
}

//largest element
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int largest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest;
    return 0;
}
