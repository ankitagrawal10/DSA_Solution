#include <iostream>
using namespace std;


// print the array using recursion
void print(int arr[], int n, int i)
{
    if (i >= n)
    {
        return;
    }

    cout << arr[i] << "->";
    print(arr, n, i + 1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;
    print(arr, n, i);
}