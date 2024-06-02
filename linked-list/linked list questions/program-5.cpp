#include <iostream>
using namespace std;

// detect & delete loop
// ---> check the loop is present or not
// ---> starting point of loop
// ---> delete the loop

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

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

bool detectioninloop(node *&head)
{
    node *slow = head;
    node *fast = head;
    if (head == NULL)
    {
        cout << "linked list is empty" << endl;
        return false;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow)
        {
            return true;
        }

        if (fast == NULL)
        {
            return false;
        }
    }
}

node *startingpointofloop(node *&head)
{
    node *slow = head;
    node *fast = head;
    if (head == NULL)
    {
        cout << "linked list is empty" << endl;
        return NULL;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow)
        {
            slow = head;
            break;
        }
    }

    while (fast != slow)
    {
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}

node *removeloop(node *&head)
{
    node *slow = head;
    node *fast = head;
    if (head == NULL)
    {
        cout << "linked list is empty" << endl;
        return NULL;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow)
        {
            slow = head;
            break;
        }
    }

    node *prev = fast;
    while (fast != slow)
    {
        prev = fast;
        fast = fast->next;
        slow = slow->next;
    }

    prev->next = NULL;
    return slow;
}
int main()
{
    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *fifth = new node(50);
    node *sixth = new node(60);
    node *seventh = new node(70);
    node *eight = new node(80);
    node *ninth = new node(90);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;
    eight->next = ninth;
    ninth->next = fifth;

    // print(first);

    cout << endl;

    cout << "loop is present is linked list or not: " << detectioninloop(first) << endl;
    cout << "starting point of the loop is: " << startingpointofloop(first)->data << endl;
    removeloop(first);
    print(first);
    cout<<endl;
    cout << "loop is present is linked list or not: " << detectioninloop(first) << endl;

    // first = reverseingroup(first, 3);
    // print(first);

    return 0;
}
