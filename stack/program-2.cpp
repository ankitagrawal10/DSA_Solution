#include <iostream>
using namespace std;

// implementation of a stack

class stack
{
public:
    int *arr;
    int top;
    int size;

    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        if (top < size - top)
        {
            top++;
            arr[top] = data;
        }

        else
        {
            cout << "stack is overflow" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack is underflow" << endl;
        }

        else
        {
            top--;
        }
    }

    int gettop()
    {
        if (top == -1)
        {
            cout << "there is not element in stack " << endl;
        }

        else
        {
            cout << arr[top] << endl;
        }
    }

    int getsize()
    {
        return top + 1;
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.isempty())
    {
        cout << s.gettop() << " ";
        s.pop();
    }

    cout << s.getsize();
    s.pop();
}
