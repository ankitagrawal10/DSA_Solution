#include <iostream>
using namespace std;

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

    
    ~node()
    {
        int value = this->data;
        while (this->next != NULL)
        {
            delete this;
            this->next = NULL;
        }
        cout << "memory is free with: " << value << endl;

    }
};

void insertathead(node *&head, node *&tail, int data)
{

    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
        tail->next = head;
        return;
    }

    node *newnode = new node(data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    tail->next = head;
}

void insertattail(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
        tail->next = head;
        head->prev = tail;
        return;
    }

    node *newnode = new node(data);
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
    tail->next = head;
}

void deletion(node *&head, node *&tail, int item)
{
    if (head == NULL)
    {
        cout << "empty node can not be deleted" << endl;
    }

    node *temp = head;
    node *ptr = head;
    while (temp != NULL && temp->data != item)
    {
        temp = temp->next;
    }

    if (head->data == item)
    {
        head = temp->next;
        tail->next = head;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }

    if (temp->data == item)
    {
        ptr = temp->next;
        temp->next = ptr->next;
        ptr->next->prev = temp;
        delete (ptr);
    }
}
void insertatmiddle(node *&head, node *&tail, int data, int item)
{
    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
        tail->next = head;
    }

    node *newnode = new node(data);
    node *temp = head;
    while (temp != NULL && temp->data != item)
    {
        temp = temp->next;
    }

    if (temp->data = item)
    {
        newnode->next = temp->next;
        temp->next->prev = newnode;
        newnode->prev = temp;
        temp->next = newnode;
    }
}
void print(node *&head)
{
    node *temp = head;
    while (true)
    {
        cout << temp->data << " ";
        temp = temp->next;

        if (temp == head)
        {
            break;
        }
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertathead(head, tail, 23);
    insertathead(head, tail, 25);
    insertathead(head, tail, 27);
    cout << "insert at head" << endl;
    print(head);
    cout << endl;

    insertattail(head, tail, 99);
    insertattail(head, tail, 97);
    insertattail(head, tail, 91);
    cout << "insert at tail" << endl;
    print(head);
    cout << endl;

    insertatmiddle(head, tail, 88, 99);
    cout << "insert at middle" << endl;
    print(head);
    cout << endl;

    deletion(head, tail, 27);
    cout << "deletion at any value" << endl;
    print(head);

    return 0;
}
