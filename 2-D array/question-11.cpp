#include<iostream>
using namespace std;

int main()
{
    int arr[] = {11,12,13,14,15};
    int n = 5;
    int k = 3;
    int arr1[5];
    for(int i = 0; i < n; i++)
    {
        arr1[(i + k) % n] = arr[i];
    }

    // Now copy the rotated array back to arr if needed
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }

    // Display the rotated array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;


    
}
