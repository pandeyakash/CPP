#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    cout << "Size of int:-" << sizeof(a) << endl;
    float b;
    cout << "Size of float:-" << sizeof(b) << endl;
    char c;
    cout << "Size of char:-" << sizeof(c) << endl;
    bool d;
    cout << "Size of bool:-" << sizeof(d) << endl;
    long int li;
    short int si;
    cout << "Size of long int:-" << sizeof(si) << endl;
    cout << "Size of long int:-" << sizeof(li) << endl;
    return 0;
}