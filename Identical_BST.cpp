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
bool is_identical(node *root1, node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if (root1 == NULL || root2 == NULL)
    {
        return false;
    }
    else
    {
        bool condition_1 = (root1->data == root2->data);
        bool condition_2 = is_identical(root1->left, root2->left);
        bool condition_3 = is_identical(root1->right, root2->right);
        if (condition_1 && condition_2 && condition_3)
        {
            return true;
        }
        return false;
    }
}

/*        4
        /   \
       2     5
      / \     \
     1   3     6
*/

int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);
    if (is_identical(root,root))
    {
        cout << "Identical BST" << endl;
    }
    else
    {
        cout << "Not Identical BST" << endl;
    }

    return 0;
}