#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int hexadecimalTOdecimal(string n)
{
    int conv = 0;
    int i = 0;
    int s = n.size();
    for (i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            conv = conv + n[i] * pow(16, i);
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            conv = conv + (n[i] - 'A' + 10) * pow(16, i);
        }
        i++;
    }
    return conv;
}
int main()
{
    string n;
    cin >> n;
    cout << hexadecimalTOdecimal(n) << endl;
    return 0;
}
