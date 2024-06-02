#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Reverse in Queue
// Approach - 1: using stack

// void reverse(queue<int> &q)
// {
//     stack<int> s;

//     while (!q.empty())
//     {
//         int element = q.front();
//         q.pop();

//         s.push(element);
//     }

//     while (!s.empty())
//     {
//         int element = s.top();
//         s.pop();

//         q.push(element);
//     }
// }

// Approach - 2: using recurrsion
void reverse(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int element = q.front();
    q.pop();

    reverse(q);

    q.push(element);
}

// Reverse in k group
void reversek(queue<int> &q, int k)
{
    stack<int> s;
    int count = 0;
    int n = q.size();
    if (k <= 0 || k > n)
    {
        return;
    }

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if (count == k)
        {
            break;
        }
    }

    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    count = 0;
    while (!q.empty() && n - k != 0)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if (count == n - k)
        {
            break;
        }
    }
}

// Interleave first & second half of the Queue

void Interleave(queue<int> &q)
{
    int n = q.size();
    int k = n / 2;
    int count = 0;
    queue<int> q2;

    if(q.empty())
    {
        return;
    }
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;
        if (count == k)
        {
            break;
        }
    }

    while (!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();

        q.push(first);

        int second = q.front();
        q.pop();

        q.push(second);
    }

    if (n & 1)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);


    // reverse(q);
    // cout << "printing queue" << endl;
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // cout << endl;

    // reversek(q, 5);

    Interleave(q);
    cout << "printing queue" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}