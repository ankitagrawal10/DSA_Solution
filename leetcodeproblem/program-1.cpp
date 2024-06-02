#include <iostream>
#include <vector>
using namespace std;
// reverse in array
vector<int> reverse(vector<int> v)
{
    int m = 2;
    int s = m + 1;
    ;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{

    vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
    v.push_back(6);
    v.push_back(90);

    vector<int> ans = reverse(v);
    print(ans);

    return 0;
}
