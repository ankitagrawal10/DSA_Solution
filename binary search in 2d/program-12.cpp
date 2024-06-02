#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ispossible(vector<int> cooksRanks, int np, int mid)
{
    int currp = 0;
    for (int i = 0; i < cooksRanks.size(); i++)
    {
        int R = cooksRanks[i], j = 1;
        int timetaken = 0;

        while (true)
        {
            if (timetaken + j*R <= mid)
            {
                currp++;
                timetaken += j * R;
                j++;
            }

            else
            {
                break;
            }
        }

        if (currp >= np)
        {
            return true;
        }
    }
    return false;
}
int minTimeCompleteOrder(vector<int> cooksRanks, int np)
{
    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int end = highestRank * (np * (np + 1) / 2);
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (ispossible(cooksRanks, np, mid))
        {
            ans = mid;
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int np, nc;
        cin >> np >> nc;
        vector<int> cooksRanks;
        while (nc--)
        {
            int R;
            cin >> R;
            cooksRanks.push_back(R);
        }

        cout << minTimeCompleteOrder(cooksRanks, np) << endl;
    }
    return 0;
}