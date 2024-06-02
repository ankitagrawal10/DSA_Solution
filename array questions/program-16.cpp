// #include<iostream>
// using namespace std;

// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int sort(int arr[], int n)
// {
//     int i = 0;
//     int j = n - 1;
//     int k = i+j/2;
//     while (i < k < j)
//     {
//         while (arr[i]==0 && i<k<j)
//         {
//             i++;
//         }

//          while (arr[k]==1 && i<k<j)
//         {
//             j--;
//         }
//         if(i<j){

//         swap(arr[i],arr[j]);
//         i++;
//         j--;

//         }

//     }
// }

// int main(){
//     int arr[9]={0,2,2,1,0,1,1,0,2};
//     int n=9;
//     //cout << "enter the number" << endl;

//     //cin >> n;
//     //printarray(arr,n);
//     sort(arr, n);
//     printarray(arr,n);
// }

#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    cout << "enter the elemnst of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void sort012(int arr[], int n)
{
    int count0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
    }
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count1++;
        }
    }
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            count2++;
        }
    }
    for (int i = 0; i <= count0; i++)
    {
        cout << "0"
             << " ";
    }
    for (int i = 0; i <= count1; i++)
    {
        cout << "1"
             << " ";
    }
    for (int i = 0; i <= count2; i++)
    {
        cout << "2"
             << " ";
    }
}
int main()
{
    int arr[100], n;
    cout << "enter the size of the aray" << endl;
    cin >> n;
    printarray(arr, n);
    sort012(arr, n);
    return 0;
}