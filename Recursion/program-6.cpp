#include <iostream>
using namespace std;
#include <limits.h>

void findmax(int arr[], int size, int i, int &maxi)
{
    if (i >= size)
    {
        return;
    }

    // if (arr[i] > maxi)
    // {
    //     maxi = arr[i];
    // }

    maxi = max(maxi, arr[i]);

    findmax(arr, size, i + 1, maxi);
}

void findmin(int arr[], int size, int i, int &mini)
{
    if (i >= size)
    {
        return;
    }

    // if (arr[i] > maxi)
    // {
    //     maxi = arr[i];
    // }

    mini = min(mini, arr[i]);

    findmin(arr, size, i + 1, mini);
}
int main()
{
    int arr[5];
    int n = 5;
    cout << "enter the value of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i = 0;
    findmax(arr, n, i, maxi);
    findmin(arr, n, i, mini);
    cout << "maximum number is: " << maxi << endl;
    cout << "minimum number is: " << mini << endl;
}