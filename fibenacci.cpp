#include <iostream>
using namespace std;
void fib(int n)
{
    int a = 0, b = 1, c;
    for (int i = 0; a < n; i++)
    {
        cout << a << "\t";
        c = a + b;
        a = b;
        b = c;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}