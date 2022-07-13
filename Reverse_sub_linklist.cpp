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

void reverse_k_node(node *&head, int start_index,int k)
{
    int count = 1;
    node *temp = head;
    while (count < start_index - 1)
    {
        temp = temp->next;

        if (count == start_index - 2)
        {
            node *prev_ptr = NULL;
            node *curr_ptr = temp->next;
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
            temp->next->next = curr_ptr;
            temp->next = prev_ptr;
        }
        count++;
    }
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
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    insert_at_tail(head, 6);
    insert_at_tail(head, 7);
    insert_at_tail(head, 8);
    display(head);
    int start_index=1;
    int last_index =4;
    reverse_k_node(head,start_index,last_index-start_index+1);
    display(head);
    return 0;
}