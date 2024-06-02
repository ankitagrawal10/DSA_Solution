#include <iostream>
using namespace std;

class CircularQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "queue is full, can not insert" << endl;
        }

        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }

        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }

        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "q is empty" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            rear = -1;
            front - 1;
        }

        else if (front == size - 1)
        {
            front = 0;
        }

        else
        {
            front++;
        }
    }

    bool isempty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getsize()
    {
        if (front == -1)
        {
            return 0;
        }

        else if (front <= rear)
        {
            return rear - front + 1;
        }

        else
        {
            return size - front + rear + 1;
        }
    }
};
int main()
{
    CircularQueue q(5);
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(25);
    q.push(35);

    if (q.isempty())
    {
        cout << "q is empty" << endl;
    }

    else
    {
        cout << "q is not empty" << endl;
    }

    cout << q.getsize() << endl;
}