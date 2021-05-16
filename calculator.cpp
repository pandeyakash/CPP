#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char op;
    cout << "Enter the two numbers:";
    cin >> n1 >> n2;
    cout << "Enter the related operator:";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Sum=" << n1 + n2 << endl;
        break;
    case '-':
        cout << "Difference=" << n1 - n2 << endl;
        break;
    case '*':
        cout << "Product:" << n1 * n2 << endl;
        break;
    case '/':
        cout << "Division" << n2 / n1 << endl;
    default:
        cout << "Invalid Operator" << endl;
    }
}