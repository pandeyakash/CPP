#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n];
    cin.getline(arr, n);
    cin.ignore();
    int current = 0, maxlen = 0;
    int i = 0, len;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (current > maxlen)
            {
                len = i;
                maxlen = current;
            }
            current = 0;
        }
        else
            current++;
        if (arr[i] == '\0')
            break;
        i++;
    }
    cout << "Max Length:" << maxlen << endl;
    for (int i = (len - maxlen); i < len; i++)
    {
        cout << arr[i];
    }
    return 0;
}