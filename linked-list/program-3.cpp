#include <iostream>
using namespace std;

// create a doubly linked list

class node
{
public:
    int data;
    node *prev;
    node *next;

    node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getlength(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
int main()
{
    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    print(first);

    return 0;
}