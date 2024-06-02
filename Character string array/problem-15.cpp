#include<iostream>
#include<string>
using namespace std;

string removeoccurence(string str,string remove)
{
    int pos = str.find(remove);
    while(pos != string::npos)
    {
        str.erase(pos,remove.length());
        pos = str.find(remove);
    }
    return str;   
}
int main()
{
     string str = "daabcbaabcbc";
     string remove = "abc";

    cout<<removeoccurence(str,remove);
}