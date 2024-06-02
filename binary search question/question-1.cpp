#include <iostream>
using namespace std;

int firstoccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int store = 0;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            store = mid;
            end = mid-1;

        }

        else if (target > element)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return store;
}

int lastoccurence(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int store = -1;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            store = mid;
            start = mid+1;

        }

        else if (target > element)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return store;
}


int main()
{
    int arr[] = {1, 3, 4, 4, 4, 4, 4,4,6, 7, 9};
    int size = 11;

    int result1 = firstoccurence(arr,10,4);
    if(result1)
    {
        cout<<"first occurence 4 of index at: "<<result1<<endl;
    }
    else 
    {
        cout<<"element no found in array"<<endl;
    }



    int result2 = lastoccurence(arr,10,4);  
    if(result2)
    {
        cout<<"Last occurence 4 of index at: "<<result2<<endl;
    }
    else 
    {
        cout<<"element no found in array"<<endl;
    }

    int totaloccurence = result2-result1+1;
    cout<<totaloccurence<<endl;
}