#include <iostream>
using namespace std;
int main()
{
    int i, j, r, c;
    cin >> r >> c;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "*"
                 << "\t";
        }
        cout << "\n";
    }
}