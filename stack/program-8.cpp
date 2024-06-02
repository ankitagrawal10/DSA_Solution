#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkvalidparethesis(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '{' || ch == '(' || ch == '[')
        {
            st.push(ch);
        }

        else
        {
            if (!st.empty())
            {
                char topelement = st.top();
                if (ch == ')' && topelement == '(')
                {
                    st.pop();
                }
                else if (ch == ']' && topelement == '[')
                {
                    st.pop();
                }
                else if (ch == '}' && topelement == '{')
                {
                    st.pop();
                }

                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "({)}";
    cout<<"check the valid parenthesis in stack or not: "<<checkvalidparethesis(s);
}