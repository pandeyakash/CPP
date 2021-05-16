#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int pocketmoney, i;
    cin >> pocketmoney;
    for (i = 0; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        if (pocketmoney < 300)
        {
            break;
        }
        cout << "Can go out." << endl;
    }
}