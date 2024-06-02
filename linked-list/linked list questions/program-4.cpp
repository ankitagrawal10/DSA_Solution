#include <iostream>
using namespace std;

// find k groups of reverse
class node
{
public:
    node *next;
    int data;

    node()
    {
        this->next = NULL;
        this->data = 0;
    }

    node(int data)
    {
        this->next = NULL;
        this->data = data;
    }
};

int getlength(node *&head)
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

node *reverseingroup(node *&head, int k)
{

    if (head == NULL)
    {
        cout << "ll is empty" << endl;
    }

    int len = getlength(head);

    if (k > len)
    {
        cout << "enter a valid value of k" << endl;
        return head;
    }

    node *prev = NULL;
    node *curr = head;
    node *forward = curr->next;
    int count = 0;

    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if (forward != NULL)
    {
        head->next = reverseingroup(forward, k);
    }

    return prev;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *fifth = new node(50);
    node *sixth = new node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    print(first);

    cout << endl;

    
    first = reverseingroup(first, 3);
    print(first);

    return 0;
}
