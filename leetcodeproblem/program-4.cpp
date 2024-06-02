#include <iostream>
using namespace std;

void movezerro(int arr[], int n)
{
    int i = 0;
    for (int j = 0; i < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
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
    int arr[7] = {2, 0, 1, 3, 0, 0, 0};
    int n = 7;
    movezerro(arr, 7);
    print(arr, 7);
}