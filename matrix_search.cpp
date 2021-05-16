/*Given a m*n matrix.
Write an algorithm to find that the given value exist in the matrix or not.
Integers in each rows are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int target, r = 0, c = m - 1;
    cin >> target;
    bool found = false;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == target)
        {
            found = true;
            // break;
        }
        else if (arr[r][c] > target)
            c--;
        else
            r++;
    }
    if (found)
        cout << "Element Found";
    else
        cout << "Element not found";
    return 0;
}