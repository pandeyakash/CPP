#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        maximum = max(maximum, arr[i]);

        minimum = min(minimum, arr[i]);
    }
    cout << "\nMax:" << maximum << endl;
    cout << "Min:" << minimum << endl;
    return 0;
}