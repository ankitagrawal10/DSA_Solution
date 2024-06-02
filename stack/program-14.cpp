#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;

vector<int> nextsmaller(vector<int> &v)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int curr = v[i];
        while (s.top() != -1 && v[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> previoussmaller(vector<int> &v)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        int curr = v[i];
        while (s.top() != -1 && v[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int getrectangularAreaHistogram(vector<int> &height)
{
    vector<int> prev = previoussmaller(height);
    vector<int> next = nextsmaller(height);

    int maxArea = INT_MIN;
    int size = height.size();
    for (int i = 0; i < height.size(); i++)
    {
        int length = height[i];
        if (next[i] == -1)
        {
            next[i] = size;
        }
        int width = next[i] - prev[i] - 1;
        int Area = length * width;
        maxArea = max(maxArea, Area);
    }
    return maxArea;
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    cout << "Ans is : " << getrectangularAreaHistogram(v) << endl;
    return 0;
}
