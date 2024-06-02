#include <iostream>
using namespace std;
// peak element

int peakelement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int arr[] = {1,2,3,10,5,4};
    int size = 6;
    cout << peakelement(arr, 4);
}