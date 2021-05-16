#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            if (i + j < 5)
            {
                cout << "*"
                     << "\t";
            }
            else
            {
                cout << " "
                     << "\t";
            }
        cout << "\n";
    }
    return 0;
}