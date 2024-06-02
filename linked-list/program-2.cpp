#include <iostream>
using namespace std;

// Insertion & Deletion of singly linked list

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

// insert at begining
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
    head = newnode;
}

// insert at end
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
    tail->next = newnode;
    tail = newnode;
}

int findlength(node *&head)
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

// insert at middle
void insertatpositon(int position, node *&head, node *&tail, int data)
{
    if (position <= 0)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    int len = findlength(head);

    if (position == 0)
    {
        insertathead(head, tail, data);
    }
    else if (position >= len)
    {
        insertattail(head, tail, data);
        return;
    }

    int i = 1;
    node *previous = head;
    while (i < position)
    {
        previous = previous->next;
        i++;
    }
    node *current = previous->next;
    node *newnode = new node(data);
    newnode->next = current;
    previous->next = newnode;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deletenode(int position, node *&head, node *&tail)
{
    if (head == NULL)
    {
        cout << "can't deleted" << endl;
        return;
    }

    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    int len = findlength(head);
    if (position == len)
    {
        int i = 1;
        node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }

        prev->next = NULL;
        node *temp = tail;
        tail = prev;
        delete temp;
        return;
    }

    int i = 1;
    node *previous = head;
    while (i < position - 1)
    {
        previous = previous->next;
        i++;
    }
    node *current = previous->next;
    node *temp = current->next;
    previous->next = temp;
    current->next = NULL;
    delete (current);
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertathead(head, tail, 20);
    insertathead(head, tail, 40);
    insertathead(head, tail, 70);
    insertathead(head, tail, 90);
    insertathead(head, tail, 200);
    insertathead(head, tail, 510);
    insertattail(head, tail, 44);
    insertattail(head, tail, 414);

    print(head);
    cout << endl;
    cout << "printing the head ->" << head->data << endl;
    cout << "printing the tail ->" << tail->data << endl;
    cout << endl;
    cout << "insert in the middle" << endl;
    insertatpositon(8, head, tail, 101);
    cout << endl;
    print(head);
    cout << endl;
    cout << "printing the head ->" << head->data << endl;
    cout << "printing the tail ->" << tail->data << endl;

    cout << endl;
    deletenode(4, head, tail);
    cout << endl;
    print(head);
}
