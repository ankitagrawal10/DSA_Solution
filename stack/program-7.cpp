#include <iostream>
#include <stack>
using namespace std;

void insertatbottom(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int topelement = s.top();
    s.pop();

    insertatbottom(s, target);
    s.push(topelement);
}

void reverseAtStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int target = s.top();
    s.pop();

    reverseAtStack(s);

    insertatbottom(s, target);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseAtStack(s);

    // Now, you can print the reversed stack
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
