#include <iostream>
using namespace std;
void max_till_i(int arr[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }
    return;
}
int main()
{
    int n, ni;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max_till_i(arr, n);
    return 0;
}