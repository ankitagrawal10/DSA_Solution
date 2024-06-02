#include <iostream>
#include <string>
using namespace std;

string replace(string a,string temp = "")
{
    // string temp = "";
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(a[i]);
        }
    }
    return temp;
}
int main()
{
    string name;
    cout << "Enter your string" << endl;
    getline(cin, name);
    cout << replace(name);
}