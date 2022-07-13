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
void Append_Last_K_Nodes(node *&head, int k)
{
    node *temp = head, *temp1 = head,*temp2;
    int count = 1;
    int pos = length(head) - k;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            head = temp->next;
            temp2=temp;

        }
        temp = temp->next;
        
        count++;
    }
    temp2->next=NULL;
    temp->next = temp1;
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
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    insert_at_tail(head, 6);
    insert_at_tail(head, 7);
    display(head);
    cout << "length of linklist : " << length(head) << endl;
    Append_Last_K_Nodes(head, 4);
    display(head);
    return 0;
}