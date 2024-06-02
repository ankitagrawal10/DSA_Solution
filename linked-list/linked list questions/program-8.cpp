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

void removeduplicateunsorted(node *&head)
{
    node *curr = head;
    while (curr != NULL)
    {
        node *temp = curr;
        while (temp->next != NULL)
        {
            if (curr->data == temp->next->data)
            {
                node *forward = temp->next;
                temp->next = forward->next;
                forward->next = NULL;
                delete forward;
            }

            else
            {
                temp = temp->next;
            }
        }

        curr = curr->next;
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
    node *third = new node(30);
    node *fourth = new node(20);
    node *fifth = new node(50);
    node *sixth = new node(10);

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
    removeduplicateunsorted(head);
    print(head);

    return 0;
}
