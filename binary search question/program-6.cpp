#include <iostream>
using namespace std;

int pivotinbinary(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}
int main()
{
    int arr[6] = {7, 9, 10, 1, 2, 3};
    int n = 6;
    int key;
    cout << pivotinbinary(arr, n);
}