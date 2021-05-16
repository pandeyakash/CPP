#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int i, j, a, b, num = 2;
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        for (j = num; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << i << endl;
        }
    }
    return 0;
}