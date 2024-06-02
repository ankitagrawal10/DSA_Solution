#include <iostream>
#include <deque>
#include <vector>
using namespace std;

// Sliding Window Problem
// problem-1 first -ve integer in every window of size k

void solve(vector<int> &arr, int n, int k)
{
    deque<int> q;

    // Process first window of size k
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }

    // Process the remaining window
    for (int i = k; i < n; i++)
    {
        if (q.empty())
        {
            cout << 0 << " ";
        }
        else
        {
            cout << arr[q.front()] << " ";
        }

        // remove the out of window
        while ((!q.empty()) && (i - q.front() >= k))
        {
            q.pop_front();
        }

        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }

    if (q.empty())
    {
        cout << 0 << " ";
    }
    else
    {
        cout << arr[q.front()] << " ";
    }
    cout << endl;
}

// problem -2 max sliding window in k

vector<int> maxslidingwindow(vector<int> &arr, int n, int k)
{
    deque<int> q;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && arr[i] >= arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }

    ans.push_back(arr[q.front()]);
    for (int i = k; i < n; i++)
    {
        if (!q.empty() && i - q.front() >= k)
        {
            q.pop_front();
        }

        while (!q.empty() && arr[i] >= arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);

        ans.push_back(arr[q.front()]);
    }

    return ans;
}

int main()
{
    // int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = 8;
    int k = 3;

    solve(arr, size, k);

    vector<int> result = maxslidingwindow(arr, size, k);
    for (int i : result)
    {
        cout << i << " ";
    }

    return 0;
}
