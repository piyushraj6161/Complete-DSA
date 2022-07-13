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

node *merge_recurcive(node *&head1, node *&head2)
{
    node *result;

    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    if (head1->data < head2->data)
    {
        result = head1;
        result->next = merge_recurcive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = merge_recurcive(head1, head2->next);
    }
    return result;
}

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1, *p2 = head2;
    // node  *temp;
    node *dummy = new node(-1);
    node *p3 = dummy;
    int l1 = length(head1), l2 = length(head2);
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data > p2->data)
        {
            p3->next = p2;
            p2 = p2->next;
        }
        else
        {
            p3->next = p1;
            p1 = p1->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    // if (head1->data > head2->data)
    // {
    //     temp = head2;
    // }
    // else
    // {
    //     temp = head1;
    // }
    return dummy->next;
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
    int arr2[] = {2, 3, 6};
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        insert_at_tail(head1, arr1[i]);
    }
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    {
        insert_at_tail(head2, arr2[i]);
    }
    display(head1);
    display(head2);
    // node *newhead = merge(head1, head2);
    // display(newhead);
    node *result = merge_recurcive(head1, head2);
    display(result);
    return 0;
}