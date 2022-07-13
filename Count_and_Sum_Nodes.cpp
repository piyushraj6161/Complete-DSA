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

int count_nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return count_nodes(root->left) + count_nodes(root->right) + 1;
}
int sum_nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return sum_nodes(root->left) + sum_nodes(root->right) + root->data;
}
/*         1
          /  \
         2    3
        / \  / \
       4   5 6  7
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
    cout << "Total Number Nodes : " << count_nodes(root) << endl;
    cout << "Total Sum of Nodes : " << sum_nodes(root) << endl;
    // cout << endl;
    return 0;
}