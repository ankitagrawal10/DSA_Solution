#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = 1;

    while (end <= n - 1)
    {
        if (start == n - 1)
        {
            end--;
        }
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end + 2;
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int brr[] = {2,7,1,9,0};

    reverse(arr, 6);
    reverse(brr, 5);
    printArray(arr, 6);
    printArray(brr, 5);

        return 0;
}