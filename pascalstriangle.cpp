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
    int i, j, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << (fact(i)) / (fact(i - j) * fact(j)) << "\t";
        }
        cout << "\n";
    }
    return 0;
}