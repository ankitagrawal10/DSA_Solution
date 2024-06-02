#include <iostream>
using namespace std;

// find the middle of linked list ----> second Approach
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

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int findlength(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count = count + 1;
    }
    return count;
}

node *findmiddle(node *&head)
{
    if (head == NULL)
    {
        cout << "ll is empty " << endl;
    }

    if (head->next == NULL)
    {
        return head;
    }

    // node *fast = head->next;
    node *fast = head;
    node *slow = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    cout << "middle is : " << slow->data << endl;
}

int main()
{
    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *fifth = new node(50);
    node *sixth = new node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    print(first);

    cout << endl;
    cout << "Length: " << findlength(first) << endl;

    findmiddle(first);

    return 0;
}
