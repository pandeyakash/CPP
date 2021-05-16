#include <iostream>
using namespace std;
int main()
{
    int i, j, n, k = 2;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j;
        }
        for (j = k; j <= (2 * i) - i; j++)
        {
            cout << j;
        }

        cout << endl;
    }
    return 0;
}