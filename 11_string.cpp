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

//palindrome check
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    string s2;
    cout << "Enter a string:";
    getline(cin, s1);
    for (int i = s1.length() - 1; i >= 0; i--)
    {
        s2.push_back(s1[i]);
    }
    if (s1 == s2)
    {
        cout << "It's palindrome!";
    }
    else
    {
        cout << "It's not a palindrome!";
    }
    return 0;
}

//convert lowercase to uppercase
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string:";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        char ch = toupper(s[i]);
        cout << ch;
    }
    return 0;
}

//convert uppercase to lowercase
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string:";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]);
        cout << ch;
    }
    return 0;
}

//number of words count
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a sentence:";
    getline(cin, s);
    int words = 1;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
        {
            words++;
        }
    }
    cout << "Number of words in a sentence:" << words;
    return 0;
}

//remove spaces
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a sentence:";
    getline(cin, s);
    
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
        {
            for (int j = i; j < s.length() - 1; j++)
            {
                s[j] = s[j + 1];
            }
            s.pop_back();
            i--;
        }
    }
    cout << "Sentence after removing spaces:" << s;

    return 0;
}

// frequency count
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "enter a string:";
    getline(cin, s);
    int freq[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            cout << " " << char(i) << ":" << freq[i] << endl;
        }
    }
    return 0;
}


// anagrams
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    string s2;
    bool result1 = false;
    bool result2 = true;
    cout << "enter a string 1:";
    getline(cin, s1);
    cout << "enter a string 2:";
    getline(cin, s2);
    int freq1[256] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq1[s1[i]]++;
    }
    int freq2[256] = {0};
    for (int i = 0; i < s2.length(); i++)
    {
        freq2[s2[i]]++;
    }
    if (s1.length() == s2.length())
    {
        result1 = true;
        for (int i = 0; i < 256; i++)
        {
            if (freq1[i]!=freq2[i])
            {
                result2 = false;
                break;
            }
        }
    }
    if (result1 == true && result2 == true)
    {
        cout << "They are anagrams!";
    }
    else
    {
        cout << "they are not anagrams!";
    }

    return 0;
}







