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

// Brute force method

// void sort(node *&head)
// {
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     node *temp = head;

//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             count0++;
//         }

//         if (temp->data == 1)
//         {
//             count1++;
//         }

//         if (temp->data == 2)
//         {
//             count2++;
//         }
//         temp = temp->next;
//     }

//     temp = head;
//     while (count0--)
//     {
//         temp->data = 0;
//         temp = temp->next;
//     }

//     while (count1--)
//     {
//         temp->data = 1;
//         temp = temp->next;
//     }

//     while (count2--)
//     {
//         temp->data = 2;
//         temp = temp->next;
//     }
// }

// 2nd approach Method

node *sort(node *&head)
{
    if(head == NULL)
    {
        cout<<"ll is empty"<<endl;
        return NULL;
    }
    node *zero = new node(-1);
    node *one = new node(-1);
    node *two = new node(-1);

    node *zerohead = zero;
    node *onehead = one;
    node *twohead = two;

    while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        if (temp->data == 0)
        {
            zero->next = temp;
            zero = zero->next;
        }

        else if (temp->data == 1)
        {
            one->next = temp;
            one = one->next;
        }

        else if (temp->data == 2)
        {
            two->next = temp;
            two = two->next;
        }
    }

    zero->next = onehead;
    one->next = twohead;
    two->next = NULL;

    node *newhead;

    if (zerohead->next == onehead)
    {
        newhead = onehead->next;
        if (newhead == twohead)
        {
            newhead = twohead->next;
        }
    }

    else if (zerohead->next != onehead)
    {
        newhead = zerohead->next;
    }

    zerohead->next = NULL;
    delete zerohead;

    if (onehead->next == twohead)
    {
        zero->next = twohead->next;
    }
    else if (onehead->next != twohead)
    {
        if (zero)
        {
            zero->next = onehead->next;
            one->next = twohead->next;
        }
    }

    onehead->next = NULL;
    delete onehead;
    delete twohead;
    return newhead;
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
    node *head = new node(0);
    node *second = new node(0);
    node *third = new node(0);
    node *fourth = new node(2);
    node *fifth = new node(0);
    node *sixth = new node(0);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    cout << "Original Linked List: ";
    print(head);

    cout << endl;
    node *temp = NULL;
    head = sort(head);
    cout << "Sorted Linked List: ";
    print(head);

    return 0;
}
