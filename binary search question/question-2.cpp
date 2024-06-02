#include <iostream>
#include <vector>
using namespace std;


int findmissingusingbinarysearch(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid + 1 == arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return mid+1;
}
int main()
{
    int arr[] = {1,2,4,5,6,7,8};
    int n = 7;

    cout<<findmissingusingbinarysearch(arr,7)<<" ";

}