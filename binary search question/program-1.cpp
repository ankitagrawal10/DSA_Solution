#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end-start) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        
    }
    return -1;
}
int main()
{
    int arr[5] = {22, 44, 67, 98, 312};
    int n = 5;
    int result = binarysearch(arr,n,98);
    if(result == -1){
        cout<<"item is not present in the array";
    }
    else{
        cout<<"item is found at index : "<<result<<endl;
    }
}