#include <iostream>
using namespace std;
void sum(int arr[], int n)
{
    int sum = 0, sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            cout << sum << endl;
        }
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum(arr, n);
    return 0;
}