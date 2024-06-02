#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

// void printingsum(int brr[][3], int row, int col)
// {
//     cout << "print the sum of row wise" << endl;
//     for (int i = 0; i < row; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum = sum + brr[j][i];
//         }
//         cout << sum << endl;
//     }
// }

bool linearsearch(int brr[][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (brr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

void maxnumber(int brr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           
            if ((brr[i][j] > maxi))
            {
                maxi = brr[i][j];
                
            }
            if(brr[i][j]<mini)
            {
                mini = brr[i][j];
            }
        }
    }
    cout<<maxi<<" "<<mini;
}

void transpose(int brr[][3],int row,int col,int transposeArr[][3])
{
    for(int i = 0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            // cout<<brr[j][i]<<" ";swap(brr[i][j],brr[j][i]);
            transposeArr[j][i]=brr[i][j];
        }
        cout<<endl;
    }
}
void printArray(int brr[][3],int row,int col)
{
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
// declare 2D array
{
    // int arr[3][3];
    // initialization
    int brr[3][3] = {
        {1, 2, 3},
        {4, 15, 6},
        {7, 8, 9}};
    int row = 3;
    int col = 3;

    cout << "printing the row wise array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    // cout << "printing the column wise array" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << brr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    // printingsum(brr,row,col);
    // if(linearsearch(brr,3,3,90))
    // {
    //     cout<<"true";
    // }
    // else
    // {
    //       cout<<"false";
    // }

    // maxnumber(brr, 3, 3);
    int transposeArr[3][3];
    transpose(brr,3,3,transposeArr);
    printArray(transposeArr,3,3);
        
}
