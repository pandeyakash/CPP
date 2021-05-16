#include <iostream>
#include <math.h>
using namespace std;
int octalTOdecimal(int n)
{
    int conv = 0, i = 0;
    while (n > 0)
    {
        conv = conv + n % 10 * pow(8, i);
        n = n / 10;
        i++;
    }
    return conv;
}
int main()
{
    int n;
    cin >> n;
    cout << octalTOdecimal(n) << endl;
    return 0;
}