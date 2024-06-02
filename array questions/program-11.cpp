#include <iostream>
using namespace std;

void intersection(int arr[], int brr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == brr[j])
            {
                cout << arr[i];
            }
            else if (arr[i] != brr[j])
            {

                continue;
            }
        }
    }
}
int main()
{
    int arr[5] = {9, 0, 5, 3, 2};
    int brr[5] = {1, 2, 6, 7, 8};
    int n = 5;

    intersection(arr, brr, n);

    return 0;
}