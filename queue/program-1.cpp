#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);

    cout << "size of queue is:" << q.size() << endl;

    q.pop();
    cout << "size of queue is:" << q.size() << endl;

    if(q.empty())
    {
        cout<<"q is empty"<<endl;
    }

    else
    {
        cout<<"q is not a empty"<<endl;
    }

    cout<<"front element of queue is : "<<q.front()<<endl;
}