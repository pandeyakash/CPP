#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % 2 == 0)
        {
            cout << "Non Prime";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime";
    }
    return 0;
}