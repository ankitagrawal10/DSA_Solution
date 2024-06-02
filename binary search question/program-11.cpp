#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // int arr[] = {1, 2, 34, 44, 51, 54};
    // int n = 6;
    // int start = 0;
    // int end = n - 1;
    // int key;
    // cin >> key;

    // while (start <= end)
    // {
    //     int mid = start + (end - start) / 2; // Corrected calculation of mid index
    //     if (key == arr[mid])
    //     {
    //         cout << mid;
    //         break; // You may want to add a break statement here to exit the loop once found
    //     }
    //     else if (key < arr[mid])
    //     {
    //         end = mid - 1;
    //     }
    //     else
    //     {
    //         start = mid + 1;
    //     }
    // }

    vector<int> v{1,2,3,4,5,6}; // predefined function in binary search in vector
    int arr[] = {1,3,4,5,6,7,8,9};
    int size = 8;

    // if(binary_search(v.begin(),v.end(),3)){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }

    if(binary_search(arr,arr+size,2))  // predefined function in binary search in array
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }


    return 0;
}
