#include <iostream>
#include <vector>
using namespace std;

// exponential search 

int bs(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] > target)
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

// int subarray(int arr[], int n, int target)
// {
//     if (arr[0] == target)
//     {
//         return 0;
//     }
//     int i = 1;
//     while (i <= n && arr[i] <= target)
//     {
//         i = i * 2;
//     }

//     return bs(arr, i / 2, min(i, n - 1), target);
// }

// int infinite(int arr[], int target)
// {
//     int i = 0;
//     int ans = -1;
//     while (1)
//     {
//         if(arr[i] > target)
//         {
//             break;
//         }
//         if (arr[i] == target)
//         {
//             ans = i;
//             i++;
//         }
//         i++;
//     }
//     return ans;
// }

int expo(int arr[],int target)
{
    int i = 0;
    int j = 1;
    while(arr[j]<target)
    {
        i = j;
        j = j*2;
    }
    return bs(arr,i,j,target);
}
int main()
{
    // int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    // int n = 10;
    // int result = subarray(arr, 10, 13);
    // if (result != -1)
    // {
    //     cout << "target is found at index:" << result << endl;
    // }
    // else
    // {
    //     cout << "target is found";
    // }


    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70,/*...*/};
    int target;
    // int result = infinite(arr,13);
    int result = expo(arr,13);                                                                             
    if(result!=-1)
    {
        cout<<"target is found at index:"<<result<<endl;
    }
    else
    {
        cout<<"target is not found"<<endl;
    }
}
