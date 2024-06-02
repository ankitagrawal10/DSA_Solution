#include <iostream>
#include <stack>
using namespace std;

// reverse string using stack

int main()
{
    string str = "Ankit";
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}