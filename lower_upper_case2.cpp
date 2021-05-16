/*
Convert a given string to uppercase and the in lower case using 
buit-in function
*/

#include <iostream>
#include <algorithm> //begin() and end() function is under this header file
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;

    // Conversion to uppercase

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    // Conversion to lowercase

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
    return 0;
}