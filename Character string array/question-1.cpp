#include <iostream>
#include <string>
using namespace std;

string occurrence(string str, string part)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == part[i])
        {
            str.pop_back(str[i]);
        }
    }
}
string removeadjacent(string str)
{

    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (ans.length() > 0)
        {
            if (ans[ans.length() - 1] == str[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(str[i]);
            }
        }
        else
        {
            ans.push_back(str[i]);
        }
    }
    return ans;
}
int main()
{
    string str = "abbaca";
    string ans;
    cout << removeadjacent(str);
}