#include <iostream>
#include <cstring>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void inc(int arr[], int n)
{
    arr[0] = arr[0] + 10;
    printarray(arr, n);
}

bool linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int linear(int arr[], int n, int key)
{
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}

int count(int arr[], int n)
{
    int counting1 = 0;
    int counting2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            counting1++;
        }
        if (arr[i] == 1)
        {
            counting2++;
        }
    }
    cout << "counting of number zero " << counting1 << endl;
    cout << "counting of number one " << counting2;
}

// maximum of array

// int maximum(int arr[], int n)
// {
//     int maxnumber = INT64_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maxnumber)
//         {
//             maxnumber = arr[i];
//         }
//     }
//     cout << maxnumber;
// }
// int minimum(int arr[], int n)
// {
//     int mininumber = INT64_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < mininumber)
//         {
//             mininumber = arr[i];
//         }
//     }
//     cout << mininumber;
// }

int exterme(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (true)
    {
        if (start > end)
        {
            break;
        }
        if (start == end)
        {
            cout << arr[start];
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++;
        end--;
    }
}

int reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (true)
    {
        if (start > end)
        {
            break;
        }
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{

    // // int arr[]={1,23,4,5,6};
    // // for(int i = 0; i<5;i++){
    // //     cout<<arr[i];
    // // }

    // int arr[5];
    // cout << "taking input on array";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "printing the double of array";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << 2 * arr[i] << endl;
    // }

    // int arr[5]={1,3,5,7,9};
    // for(int i = 0;i<5;i++){
    //     arr[i]=1;
    // }
    // for(int i = 0;i<5;i++){
    //     cout<<arr[i];
    // }

    // int arr[10];
    // memset(arr,-1,sizeof(arr));

    // for(int i = 0;i<10;i++){
    //     cout<<arr[i]<<endl;
    // }

    // function in array

    // int arr[5]={1,2,3,4,5};
    // int size = 5;
    // if(linearsearch(arr,5,9)){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";

    // }

    // linear(arr,5,14);
    // printarray(arr, size);

    // int arr[] = {1, 0, 1, 0, 1};
    // int n = 5;
    // count(arr, n);
    // printarray(arr,n);

    // maximum element of array

    // int arr[] = {2, 4, 1, 6, 8, -9};
    // int n = 6;
    // maximum(arr, n);
    // minimum(arr,n);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    // exterme(arr, n);
    reverse(arr, n);
    printarray(arr, n);
}