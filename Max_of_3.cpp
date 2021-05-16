#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE //not part of the code, used to beautify the code
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "\na is largest";
        }
        else
        {
            cout << "\n c is largest";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "\nb is largest";
        }
        else
        {
            cout << "c is largest";
        }
    }
}