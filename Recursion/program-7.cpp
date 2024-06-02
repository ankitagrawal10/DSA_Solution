#include <iostream>
#include <vector>
#include <string>
using namespace std;

void checkcharacter(string name, int i, vector<int> &ans)
{
    if (i >= name.length())
    {
        return;
    }
    if (name[i] == 'b')
    {
        ans.push_back(i);
    }
    checkcharacter(name, i + 1, ans);
}
int main()
{
    string name = "lovebabber";
    int i = 0;
    vector<int> ans;
    checkcharacter(name, i, ans);
    for (auto val : ans)
    {
        cout << val << " ";
    }
}