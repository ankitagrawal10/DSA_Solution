#include <iostream>
#include <vector>
using namespace std;

class Stack
{
public:
    vector<pair<int, int>> st;

    void push(int val)
    {
        if (st.empty())
        {
            pair<int, int> p = make_pair(val, val);
            st.push_back(p);
        }
        else
        {
            pair<int, int> p;
            p.first = val;
            p.second = min(val, st.back().second);
            st.push_back(p);
        }
    }

    void pop()
    {
        st.pop_back();
    }

    int top()
    {
        return st.back().first;
    }

    int getmin()
    {
        return st.back().second;
    }

    bool empty()
    {
        return st.empty();
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Print the minimum value before popping all elements
    cout << "Minimum: " << s.getmin() << endl;

    // Pop all elements
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
