#include <iostream>
using namespace std;

// circular linked list

class node
{
public:
    int data;
    node *next;

    node()
    {
        this->data = 0;
        this->next = NULL;
    }

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    
    // ~node()
    // {
    //     int value = this->data;
    //     while (this->next != NULL)
    //     {
    //         delete this;
    //         this->next = NULL;
    //     }
    //     cout << "memory is free with: " << value << endl;

    // }
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
        return;
    }

    node *newnode = new node(data);
    tail->next = newnode;
    tail = newnode;
    tail->next = head;
}

void insertatvalue(node *&head, node *&tail, int data, int item)
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
    node *temp = head;

    while (temp != NULL && temp->data != item)
    {
        temp = temp->next;
    }

    if (temp->data == item)
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void print(node *&head, node *&tail)
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

void deletionatnode(node *&head, node *&tail, int item)
{
    if (head == NULL)
    {
        cout << "empty node can't be deleted" << endl;
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
        temp->next = NULL;
        tail->next = head;
        delete temp;
    }

    if (temp->data == item)
    {
        ptr = temp->next;
        temp->next = ptr->next;
        delete (ptr);
    }
}

int main()
{

    node *head = NULL;
    node *tail = NULL;
    insertathead(head, tail, 44);
    insertathead(head, tail, 47);
    insertathead(head, tail, 41);
    insertathead(head, tail, 49);
    insertattail(head, tail, 54);
    insertatvalue(head, tail, 74, 47);
    print(head, tail);
    cout << endl;
    deletionatnode(head, tail, 44);
    print(head, tail);

    return 0;
}
