#include <iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
}
int firstoccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastoccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + end / 2;
    while (start <= end)
    {
        
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[9] ;
    int n = 9;
    cout<<"enter your element of array";
    printarray(arr,n);
    // int result = binarysearch(arr,5,98);
    cout << "first occurence of the index at:" << firstoccurence(arr, n, 3);
    cout<<endl;
    cout << "last occurence of the index at:" << lastoccurence(arr, n, 3);
    cout<<endl;

    int totalindex = lastoccurence(arr, n, 3)-firstoccurence(arr, n, 3)+1;
    cout<<"total no. occurence :"<<" "<<totalindex;
}
