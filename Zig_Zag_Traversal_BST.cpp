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

void Zig_zag_traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<node *> curr_level;
    stack<node *> next_level;
    bool left_to_right = true;
    curr_level.push(root);
    while (!curr_level.empty())
    {
        node *temp = curr_level.top();
        curr_level.pop();
        if (temp != NULL)
        {
            cout << temp->data << " ";

            if (left_to_right)
            {
                if (temp->left)
                {
                    next_level.push(temp->left);
                }
                if (temp->right)
                {
                    next_level.push(temp->right);
                }
            }
            // Right to left
            else
            {
                if (temp->right)
                {
                    next_level.push(temp->right);
                }
                if (temp->left)
                {
                    next_level.push(temp->left);
                }
            }
        }
        if (curr_level.empty())
        {
            left_to_right = !left_to_right; // false
            swap(curr_level, next_level);
        }
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
    Zig_zag_traversal(root);
    cout<<endl;
    return 0;
}