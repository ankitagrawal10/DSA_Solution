#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool checkredundant(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }

        else if (ch == ')')
        {
            bool isOperatorFound = true;

            while (!st.empty() && st.top() != '(')
            {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                {
                    isOperatorFound = false;
                }
                st.pop();
            }

            if (isOperatorFound == true)
            {
                return true; // Redundant parentheses found
            }
            st.pop();
        }
    }

    return false;
}

int main()
{
    string s = "(a+b)+(d)";
    if (checkredundant(s))
    {
        cout << "Yes, this is a redundant expression" << endl;
    }
    else
    {
        cout << "No redundant parentheses" << endl;
    }

    return 0;
}
