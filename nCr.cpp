#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int nf = fact(n);
    int rf = fact(r);
    int nrf = fact(n - r);
    int nCr = (nf) / (nrf * rf);
    cout << "nCr:" << nCr << endl;
    return 0;
}