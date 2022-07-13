#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node() {}
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
int length(node *head)
{
    int length = 0;
    node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
void circular_linklist(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
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
    node *head1 = NULL;
    node *head2 = NULL;
    int arr1[] = {1, 4, 5, 7};
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        insert_at_tail(head1, arr1[i]);
    }
    circular_linklist(head1);
    display(head1);

    return 0;
}