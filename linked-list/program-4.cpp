#include <iostream>
using namespace std;

// insertion and deletion of  doubly linked list

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

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertathead(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    node *newnode = new node(data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insertattail(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    node *newnode = new node(data);
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
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
void insertatmiddle(int position, node *&head, node *&tail, int data)
{
    if (position == 0)
    {
        insertathead(head, tail, data);
        return;
    }

    int len = getlength(head);
    if (position >= len)
    {
        insertattail(head, tail, data);
        return;
    }

    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    int i = 1;
    node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    // With the current poiner

    // node *current = prev->next;
    // node *newnode = new node(data);
    // newnode->next = current;
    // current->prev = newnode;
    // prev->next = newnode;
    // newnode->prev = prev;

    // without the current pointer
    node *newnode = new node(data);
    newnode->next = prev->next;
    prev->next->prev = newnode;
    prev->next = newnode;
    newnode->prev = prev;
}

void deletionatnode(int position, node *&head, node *&tail)
{
    if (head == NULL)
    {
        cout << "cannot be deleted" << endl;
    }

    int len = getlength(head);

    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else if (position == len)
    {
        node *temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
    }

    else
    {
        int i = 1;
        node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }

        node *current = prev->next;
        node *temp = current->next;
        prev->next = temp;
        temp->prev = prev;
        current->next = NULL;
        current->prev = NULL;
        delete current;
    }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertathead(head, tail, 23);
    insertathead(head, tail, 25);
    insertathead(head, tail, 27);
    insertattail(head, tail, 99);
    insertattail(head, tail, 97);
    insertattail(head, tail, 91);
    print(head);
    cout << endl;

    cout << "insert at middle" << endl;
    insertatmiddle(3, head, tail, 109);
    print(head);
    cout << endl;
    cout << endl;

    cout << "deletion of doubly linked list" << endl;
    cout << endl;
    deletionatnode(4, head, tail);
    print(head);

    return 0;
}