#include <iostream>
using namespace std;

// sprial print
int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int row = 3;
    int col = 4;

    // for(int startcol = 0; startcol<col;startcol++)
    // {
    //     if((startcol&1)==0)
    //     {
    //         for(int i = 0 ; i<row ;i++)
    //         {
    //             cout<<arr[i][startcol]<<" ";
    //         }
    //     }
    //     else
    //     {
    //         for(int i = row-1; i>=0;i--)
    //         {
    //             cout<<arr[i][startcol]<< " ";
    //         }
    //     }
    // }

    for (int rowstart = 0; rowstart < row; rowstart++)
    {
        if ((rowstart % 2) == 0)
        {
            for (int i = 0; i < col; i++)
            {
                cout << arr[rowstart][i] << " ";
            }
        }
        else
        {
            for (int i = col - 1; i >= 0; i--)
            {
                cout << arr[rowstart][i] << " ";
            }
        }
    }
}