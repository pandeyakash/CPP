#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    do
    {
        cin >> n;
        cout << n << endl;
    } while (n > 0);
    return 0;
}