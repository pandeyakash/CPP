#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum=" << sum << endl;
    return 0;
}