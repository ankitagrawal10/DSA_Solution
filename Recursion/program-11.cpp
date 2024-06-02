#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printsubsequence(string str, string output, int i, vector<string> &v)
{
    if (i >= str.length())
    {
        v.push_back(output);
        return;
    }

    // exclude
    printsubsequence(str, output, i + 1, v);

    // include
    output.push_back(str[i]);
    printsubsequence(str, output, i + 1, v);
}
int main()
{
    string str = "abcd";
    string output = "";
    vector<string> v;
    int i = 0;
    printsubsequence(str, output, i, v);
    cout << "printing all subsequences" << endl;
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl
         << v.size() << endl;
}
