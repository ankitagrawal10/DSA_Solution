#include <iostream>
using namespace std;
// bubble sort

void printarray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // int mini = i;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[6] = {10, 1, 7, 6, 14, 9};
    int n = 6;
    sort(arr, n);
    cout << "sorted element are:";
    printarray(arr, n);
}