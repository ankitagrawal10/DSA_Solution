#include <iostream>
using namespace std;


// check palindrome of a linked list
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

bool palindrome(node *&head)
{
    node *fast = head->next;
    node *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    node *curr = slow->next;
    node *prev = NULL;
    while (curr != NULL)
    {
        node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    slow->next = prev;

    node *temp1 = head;
    node *temp2 = slow->next;

    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }

        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    return true;
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
    node *fourth = new node(30);
    node *fifth = new node(20);
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

    bool ispalindrome = palindrome(head);
    // print(head);
    cout << endl;

    if (ispalindrome)
    {
        cout << "Given linked list is a paliindrome:" << endl;
    }
    else
    {
        cout << "Given linked list is not a palindrome:" << endl;
    }

    return 0;
}
