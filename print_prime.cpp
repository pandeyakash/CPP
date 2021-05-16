#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, i, num;
    cin >> a >> b;
    while (a <= b)
    {

        int div = 2;
        while (div < a)
        {
            if (a % div == 0)
            {

                break;
            }
            else
            {
                div = div + 1;
            }
        }
        if (a == div)
        {
            cout << a << endl;
        }
        a = a + 1;
    }
    return 0;
}