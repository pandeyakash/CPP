#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int first = 0;
    int last = n;
    while (first <= last)

    {
        int middle = (first + last) / 2;

        if (key == arr[middle])
        {
            return middle;
            break;
        }
        else if (key < arr[middle])
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    return -1;
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
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n"
         << binary_search(arr, n, key) << endl;
    return 0;
}