#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number:-" << endl;
    cin >> a;
    if (a % 2 == 0 && a % 3 == 0)
    {
        cout << "Divisible by both" << endl;
    }
    else if (a % 2 == 0)
    {
        cout << "Divisible by only 2" << endl;
    }
    else if (a % 3 == 0)
    {
        cout << "Divisible by only 3" << endl;
    }
    return 0;
}