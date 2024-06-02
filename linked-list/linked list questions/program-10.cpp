#include <iostream>
using namespace std;

// sort 0,1,2 in linked list
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

node *reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *forward = curr->next;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    if (curr == NULL)
    {
        return prev;
    }
}

node *solve(node *&head1, node *&head2)
{
    head1 = reverse(head1);
    head2 = reverse(head2);

    node *anshead = NULL;
    node *anstail = NULL;

    int carry = 0;
    while (head1 != NULL && head2 != NULL)
    {
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        carry = sum / 10;

        node *newnode = new node(digit);
        if (anshead == NULL)
        {
            anshead = newnode;
            anstail = newnode;
        }

        else
        {
            anstail->next = newnode;
            anstail = newnode;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    while (head1 != NULL)
    {
        int sum = carry + head1->data;
        int digit = sum % 10;
        int carry = sum / 10;
        node *newnode = new node(digit);
        anstail->next = newnode;
        anstail = newnode;
        head1 = head1->next;
    }

    while (head2 != NULL)
    {
        int sum = carry + head2->data;
        int digit = sum % 10;
        int carry = sum / 10;
        node *newnode = new node(digit);
        anstail->next = newnode;
        anstail = newnode;
        head2 = head2->next;
    }

    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = carry / 10;
        node *newnode = new node(digit);
        anstail->next = newnode;
        anstail = newnode;
    }

    anshead = reverse(anshead);
    return anshead;
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

    node *head1 = new node(2);
    node *second1 = new node(4);
    head1->next = second1;

    node *head2 = new node(2);
    node *second2 = new node(3);
    node *third2 = new node(6);
    head2->next = second2;
    second2->next = third2;

    node *ans = solve(head1, head2);
    print(ans);

    return 0;
}
