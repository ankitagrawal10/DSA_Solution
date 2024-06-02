#include <iostream>
using namespace std;

int findpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

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
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarysearch(int arr[], int s, int e, int target)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int searchelement(int arr[], int n, int target)
{
    int pivot = findpivot(arr, n);
    if (target >= arr[pivot] && target <= arr[n-1])
    {
        return binarysearch(arr,pivot,n-1,target);
    }

    else
    {
        return binarysearch(arr,0 , pivot-1,target);
    }
}
int main()
{
    int arr[] = {7, 9, 1, 2, 3};
    int n = 5;

    cout << searchelement(arr, n,9);
}