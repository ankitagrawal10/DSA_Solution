#include<iostream>
#include<string>
using namespace std;

string removeduplicate(string str)
{
    string ans = "";
    for(int i = 0;i<str.length();i++)
    {
        if(ans.length()>0)
        {
           if(ans[ans.length()-1]==str[i])
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
    cout<<str<<endl;

    cout<<removeduplicate(str);
}

