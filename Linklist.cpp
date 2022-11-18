#include <iostream>
using namespace std;

class node
{
     int data;
     node *next;
public:
   
    node()
    {
    }
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert_at_head(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
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

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

node *reverse(node *&head)
{
    node *prev_ptr = NULL;
    node *curr_ptr = head;
    node *next_ptr;
    while (curr_ptr != NULL)
    {
        next_ptr = curr_ptr->next;
        curr_ptr->next = prev_ptr;

        prev_ptr = curr_ptr;
        curr_ptr = next_ptr;
    }
    return prev_ptr;
}

node *reverse_recursive(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *new_head = reverse_recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
}

void delete_at_head(node *&head)
{
    node *to_delete = head;
    head = head->next;

    delete to_delete;
}

void deletion(node *head, int val)
{

    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete_at_head(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *to_delete = temp->next;
    temp->next = temp->next->next;
    delete to_delete;
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
    display(head);
    cout << "Insertion of element at head in linklist : " << endl;
    insert_at_head(head, 0);
    display(head);
    cout << "searching result : " << search(head, 2) << endl;
    cout << "Reverse of linklist using itration : " << endl;
    node *new_head = reverse(head);
    display(new_head);
    cout << "Reverse of linklist using recurion : " << endl;
    node *new_new_head = reverse_recursive(new_head);
    display(new_new_head);
    cout << "Deletion of element in linklist : " << endl;
    deletion(new_new_head, 2);
    display(new_new_head);
    cout << "Deletion of element at head in linklist : " << endl;
    delete_at_head(new_new_head);
    display(new_new_head);

    return 0;
}
