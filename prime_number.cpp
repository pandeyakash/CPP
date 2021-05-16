#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int div = 2;
    while (div < n)
    {
        if (n % div == 0)
        {
            cout << "Not Prime" << endl;
            break;
        }
        else
        {
            div = div + 1;
        }
    }
    if (n == 1)
    {
        cout << "1 is neither prime nor composite" << endl;
    }
    else if (div == n)
    {
        cout << "Prime" << endl;
    }
    return 0;
}