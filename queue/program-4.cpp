#include <iostream>
using namespace std;

class Deque
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size)
    {
        this->size = size;
        arr = new int[arr];
        front = -1;
        rear = -1;
    }

    void pushRear(int data)
    {
        if ((front == 0 && rear == size - 1) || (front == rear + 1))
        {
            cout << "queue is full, can not insert" << endl;
            return;
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

    void pushfront(int data)
    {
        if ((front == 0 && rear == size - 1) || (front == rear + 1))
        {
            cout << "queue is full, can not insert" << endl;
            return;
        }

        else if (front == -1)
        {
            front = rear = 0;
            arr[front] = data;
        }

        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
            arr[front] = data;
        }

        else
        {
            front--;
            arr[front] = data;
        }
    }

    void popFront()
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
            arr[front] = -1;
            front = 0;
        }

        else
        {
            arr[front] = -1;
            front++;
        }
    }

    void popRear()
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

        else if (rear == 0)
        {
            arr[rear] = -1;
            rear = size - 1;
        }

        else
        {
            arr[rear] = -1;
            rear--;
        }
    }
};
int main()
{
    Deque dq(10);
    dq.pushfront(10);
    dq.pushfront(30);
}