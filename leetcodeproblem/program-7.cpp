#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findarray(vector<int> a, int n, vector<int> b, int m)
{
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i > 0)
    {
        int sum = a[i]+ carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    while (j > 0)
    {
        int sum = a[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}
// vector<int> print(vector<int> ans)
// {
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

void print(const vector<int>& ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    vector<int> b;
    b.push_back(5);
    b.push_back(6);
    b.push_back(7);
    b.push_back(8);
    int n = 4;
    int m = 4;

    vector<int> sum = findarray(a, n, b, m);
    print(sum);
}