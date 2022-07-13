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

node* reverse_k_node(node *&head, int k)
{

    node *prev_ptr = NULL;
    node *curr_ptr = head;
    node *next_ptr;
    int count = 0;
    while (curr_ptr != NULL && count < k)
    {
        next_ptr = curr_ptr->next;
        curr_ptr->next = prev_ptr;

        prev_ptr = curr_ptr;
        curr_ptr = next_ptr;
        count++;
    }
    if (next_ptr != NULL)
    {
        head->next = reverse_k_node(next_ptr, k);
    }
    return prev_ptr;
}

void display(node *head)
{

    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    cout << "Insertion of element at tail in linklist : " << endl;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    // insert_at_tail(head, 3);
    // insert_at_tail(head, 4);
    display(head);
    int k=2;
    node *new_head = reverse_k_node(head,k);
    display(new_head);
    return 0;
}