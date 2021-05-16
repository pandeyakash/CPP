#include <iostream>
using namespace std;
int main()
{
    int n, i, fact 4= 1;
    cin >> n;
    for (i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    cout << "Factorial Value=" << fact << endl;
    return 0;
}