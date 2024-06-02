#include <iostream>
using namespace std;


// int unique(int arr[], int n)
// {
//     int ans = 0;
//     for(int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];

//     }
//     return ans;
// }
void unique(int arr[], int n)
{

    int count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            cout << arr[i];
        }
    }
}

int main()
{
    int arr[10] = {1, 1, 3, 3, 2, 2, 4, 4, 6, 1};
    int n = 10;

    unique(arr, n);
    // printArray(arr, n);
}