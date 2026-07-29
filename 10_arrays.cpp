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

//smallest element
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {0, 2, 9, -1, 8};
    int smallest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << smallest;
    return 0;
}

//reverse an array
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// even and odd number check
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    cout << "Even count:" << count1 << endl;
    cout << "Odd count:" << count2;
    return 0;
}

//second largest element
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {30, 10, 20, 40};
    int temp;
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int second_largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    cout << "Second largest element:" << second_largest;

    return 0;
}

//remove duplicate
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 0, 4, 1, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == temp)
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//left rotation by one position
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


// right rotation by one position
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        arr[n - i - 1] = arr[n - i - 2];
    }
    arr[0] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


