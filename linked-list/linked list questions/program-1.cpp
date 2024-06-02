#include <iostream>
using namespace std;

// reverse a linked list
class node
{
public:
    node *prev;
    node *curr;
    node *next;
    int data;

    node()
    {
        this->prev = NULL;
        this->curr = NULL;
        this->next = NULL;
        this->data = 0;
    }

    node(int data)
    {
        this->prev = NULL;
        this->curr = NULL;
        this->next = NULL;
        this->data = data;
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

node *reverse(node *&prev, node *&curr)
{

    // step - 1 using Recurrsion

    // if (curr == NULL)
    // {
    //     return prev;
    // }

    // node *forward = curr->next;
    // curr->next = prev;

    // reverse(curr, forward);
    
    // step - 2 using Loops

    while (curr != NULL)
    {
        node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    if (curr == NULL)
    {
        return prev;
    }
}

int main()
{

    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *forth = new node(40);

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = NULL;

    print(first);

    cout << endl;
    node *curr = first;
    node *prev = NULL;
    first = reverse(prev, curr);
    print(first);
    cout << endl;
}