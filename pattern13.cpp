#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = n; j > (i + 1); j--)
        {
            cout << " "
                 << "\t";
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "*"
                 << "\t";
        }
        cout << "\n";
    }
    for (i = n; i > 0; i--)
    {
        for (j = i; j < n; j++)
        {
            cout << " "
                 << "\t";
        }
        for (j = 1; j < 2 * i; j++)
        {
            cout << "*"
                 << "\t";
        }
        cout << "\n";
    }
    return 0;
}