/*
Convert a given string in upper case and then in lower case without using
built-in function
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str << endl;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    cout << str << endl;
    return 0;
}