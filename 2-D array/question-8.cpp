#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralprint(vector<vector<int>> arr)
{
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();

    int count = 0;
    int total = row * col;

    int startingrow = 0;
    int endingrow = row - 1;
    int startingcol = 0;
    int endingcol = col - 1;

    while (count < total)
    {
        for (int index = startingcol; index <= endingcol; index++)
        {
            ans.push_back(arr[startingrow][index]);
            count++;
        }
        startingrow++;

        for (int index = startingrow; index <= endingrow; index++)
        {
            ans.push_back(arr[index][endingcol]);
            count++;
        }
        endingcol--;

        if (count < total)
        {
            for (int index = endingcol; index >= startingcol; index--)
            {
                ans.push_back(arr[endingrow][index]);
                count++;
            }
            endingrow--;
        }

        if (count < total)
        {
            for (int index = endingrow; index >= startingrow; index--)
            {
                ans.push_back(arr[index][startingcol]);
                count++;
            }
            startingcol++;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> arr{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    vector<int> ans = spiralprint(arr);

    for (int num : ans)
    {
        cout << num << " ";
    }

    return 0;
}
