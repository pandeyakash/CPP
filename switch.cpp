#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char n;
    cin >> n;
    switch (n)
    {
    case 'a':
        cout << "hello" << endl;
        break;

    case 'b':
        cout << "Hola" << endl;
        break;
    case 'c':
        cout << "Ciao" << endl;
        break;

    default:
        cout << "I am still learning more" << endl;
        break;
    }
}