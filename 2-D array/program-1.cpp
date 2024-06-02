#include <iostream>
#include <algorithm>
using namespace std;

bool ispresent(int arr[][4], int target, int n, int m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];

    // int arr[3][4]={{2,1,2,1},{3,1,3,2},{3,2,3,2}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "enter the element" << endl;
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "enter the target in array" << endl;
    int target;
    cin >> target;
    if (ispresent(arr, target, 3, 4))
    {
        cout << "element is found" << endl;
    }
    else
    {
        cout << "element is not found" << endl;
    }
}

