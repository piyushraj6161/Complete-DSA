#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
// case 1
void print_subtree_node(node *root, int k)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    print_subtree_node(root->left, k - 1);
    print_subtree_node(root->right, k - 1);
}
// case 2
int printnode_at_k(node *root, node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        print_subtree_node(root, k);
        return 0;
    }
    int left_dis = printnode_at_k(root->left, target, k);
    if (left_dis != -1)
    {
        if (left_dis + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            print_subtree_node(root->right, k - left_dis - 2);
        }
        return 1 + left_dis;
    }
    int right_dis = printnode_at_k(root->right, target, k);
    if (right_dis != -1)
    {
        if (right_dis + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            print_subtree_node(root->left, k - right_dis - 2);
        }
        return 1 + right_dis;
    }
    return -1;
}

/*        1
        /   \
       2       3
      /  \     / \
     4     5   6  7
    / \    / \
   8   9   10 11
*/

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->left = new node(8);
    root->left->left->right = new node(9);
    root->left->right->left = new node(10);
    root->left->right->right = new node(11);
    printnode_at_k(root, root->left, 2);
    cout<<endl;
    return 0;
}