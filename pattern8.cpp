#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    for (i = n; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            cout << j + 1 << "\t";
        }
        cout << endl;
    }
    return 0;
}