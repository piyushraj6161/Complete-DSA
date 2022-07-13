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
node *insert_BST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = insert_BST(root->left, val);
    }
    else
    {
        root->right = insert_BST(root->right, val);
    }
    return root;
}
void In_order(node *root)
{
    if (root == NULL)
    {
        return;
    }
    In_order(root->left);
    cout << root->data << " ";
    In_order(root->right);
}
/*        5
        /   \
       1     7
        \      
         3      
        / \   
       2   4
*/

int main()
{
    node *root = NULL;
    root= insert_BST(root,5);
    insert_BST(root,1);
    insert_BST(root,3);
    insert_BST(root,4);
    insert_BST(root,2);
    insert_BST(root,7);
    In_order(root);
    cout<<endl;
    return 0;
}