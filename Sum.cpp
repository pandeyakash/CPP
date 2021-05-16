#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, c;
    //cout << "Enter the amount of money given by rohan's mom and dad respectively:-";
    cin >> a >> b;
    c = a + b;
    cout << "Sum:-" << c;
    return 0;
}