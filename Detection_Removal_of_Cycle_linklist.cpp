#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
    }
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert_at_tail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void make_cylcle(node *&head, int pos)
{
    node *temp = head;
    node *start_node;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            start_node = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = start_node;
}

bool Detect_cyle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next->next;
        fast = fast->next->next->next;
        if (fast == slow)
        {
            cout << slow->data << " ";
            return true;
        }
    }
    return false;
}

void Removal_cycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    node *head = NULL;
    cout << "Insertion of element at tail in linklist : " << endl;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    insert_at_tail(head, 6);
    insert_at_tail(head, 7);
    insert_at_tail(head, 8);
    insert_at_tail(head, 9);
    display(head);
    make_cylcle(head, 4);
    // display(head);
    cout << "Result(Postion,Cycle) : " << Detect_cyle(head) << endl;
    Removal_cycle(head);
    display(head);
    cout << "Result(Postion,Cycle) : " << Detect_cyle(head) << endl;
  
    return 0;
}