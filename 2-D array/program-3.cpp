#include <iostream>
using namespace std;

bool binarysearch(int arr[][2], int target)
{
    int start = 0;
    int row = 2;
    int col = 2;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = arr[mid / col][mid % col];
        if (element == target)
        {
            return true;
        }
        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid =start+(end-start) / 2;
    }
    return false;
}
int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    int target;
    cout << "Enter your target you want to search" << endl;
    cin >> target;

    cout << binarysearch(arr, target);

    return 0;
}
