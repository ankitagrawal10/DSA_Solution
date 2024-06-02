#include <iostream>
using namespace std;

bool searcharray(int arr[][4], int target)
{
    int row = 4;
    int col = 4;

    int rowindex = 0;
    int colindex = col - 1;

    while (rowindex < row && colindex >= 0)
    {
        int element = arr[rowindex][colindex];
        if (element == target)
        {
            return 1;
        }

        if (element < target)
        {
            rowindex++;
        }
        else
        {
            colindex--;
        }
    }
    return 0;
}
int main()
{
    int arr[4][4] = {{1, 4, 7, 11},
                     {2, 5, 8, 12},
                     {3, 6, 9, 16},
                     {10, 13, 14, 17}};
    int target;
    cin >> target;
    cout << searcharray(arr, target);
}