#include <iostream>
using namespace std;
int main()
{
    int n, lastdigit, reverse = 0;
    cin >> n;
    int a = n;
    while (n > 0)
    {
        lastdigit = n % 10;
        reverse = reverse + (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }
    if (a == reverse)
        cout << "Armstrong";
    else
    {
        cout << "Not Armstrong";
    }
    return 0;
}