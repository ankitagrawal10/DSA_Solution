#include <iostream>
using namespace std;

// find the middle of linked list ----> first Approach 
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

void findmiddleevenoflinkedlist(node *head)
{
    node *temp = head;
    int length = (findlength(head) / 2) - 1;
    while (length--)
    {
        temp = temp->next;
    }

    cout << "Middle of this node is: " << temp->data << endl;
}

void findoddmiddlelinkedlist(node *head)
{
    node *temp = head;
    int length = findlength(head) / 2;
    while (length--)
    {
        temp = temp->next;
    }
    cout << "Middle of this node is: " << temp->data << endl;
}

int main()
{
    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *fifth  = new node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    print(first);

    cout << endl;
    cout << "Length: " << findlength(first) << endl;

    int length = findlength(first);
    if (length % 2 == 0)
    {
        findmiddleevenoflinkedlist(first);
    }
    else
    {
        findoddmiddlelinkedlist(first); 
    }

    cout << endl;

    return 0;
}
