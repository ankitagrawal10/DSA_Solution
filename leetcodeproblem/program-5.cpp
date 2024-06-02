#include <iostream>
using namespace std;

void rotate(int arr[], int arr1[],int n, int k)
{
   
    int i = 0;
    for (; i < n; i++)
    {
        arr1[(i + k) % n] = arr[i];
    }
   
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5];
    int n = 5;
    int k = 2;

    rotate(arr,arr1 ,n, k);
    print(arr1, n);
}