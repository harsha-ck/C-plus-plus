//reversing a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string:";
    getline(cin, s);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}

//vowels and consonants count
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string:";
    getline(cin, s);
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
    }
    cout << "Vowels count:" << count1 << endl;
    cout << "Consonants count:" << count2;
    return 0;
}

