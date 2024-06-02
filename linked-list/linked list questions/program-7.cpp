#include <iostream>
using namespace std;

// Remove duplicated in sorted linked list
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

void removeduplicate(node *&head)
{
    node *curr = head;
    node *forward = curr->next;
    while (forward != NULL)
    {
        if (curr->data != forward->data)
        {
            curr = forward;
            forward = forward->next;
        }

        else
        {
            curr->next = forward->next;
            forward->next = NULL;
            delete forward;
            forward = curr->next;
        }
    }
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
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(20);
    node *fourth = new node(20);
    node *fifth = new node(20);
    node *sixth = new node(20);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    cout << "Original Linked List: ";
    print(head);

    cout << endl;

    cout << "remove duplicates:" << endl;
    removeduplicate(head);
    print(head);

    return 0;
}
