#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the sides of the triangle:-" << endl;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "This is equilateral triangle." << endl;
    }
    if (a == b || b == c || c == a)
    {
        cout << "This is an isosceles triangle." << endl;
    }
    else
    {
        cout << "This is an scalene triangle." << endl;
    }
    return 0;
}