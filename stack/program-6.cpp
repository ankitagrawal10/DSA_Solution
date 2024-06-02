#include <iostream>
#include <stack>
using namespace std;

// insert at bottom

void printatbottom(stack<int> &s, int target)
{

    if (s.empty())
    {
        s.push(target);
        return;
    }

    int temp = s.top();
    s.pop();

    printatbottom(s, target);

    s.push(temp);
}

void solve(stack<int> &s)
{
    if (s.empty())
    {
        cout << "can not pop the element" << endl;
    }

    int target = s.top();
    s.pop();

    printatbottom(s, target);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // int target = 11;
    // printatbottom(s, target);

    solve(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}