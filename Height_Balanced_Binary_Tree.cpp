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

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}

bool is_balanced(node *root)    // O(n^2)
{
    if (root == NULL)
    {
        return true;
    }
    if (is_balanced(root->left) == false)
    {
        return false;
    }
    if (is_balanced(root->right) == false)
    {
        return false;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);
    if (abs(left_height - right_height) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_Optimal_balanced(node *root,int *height)  // O(n)
{
    if (root == NULL)
    {
        return true;
    }
    int left_height = 0;
    int right_height = 0;
    if (is_Optimal_balanced(root->left,&left_height) == false)
    {
        return false;
    }
    if (is_Optimal_balanced(root->right,&right_height) == false)
    {
        return false;
    }
    *height=max(left_height,right_height)+1; 
    if (abs(left_height - right_height) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*         1                    1
          /  \                 /
         2    3               2
        / \  / \             /
       4   5 6  7           3
      Balance Tree         Not Balance Tree
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
    int height=0;
    if (is_balanced(root) && is_Optimal_balanced(root,&height))
    {
        cout << "Balanced Tree" << endl;
    }
    else
    {
        cout << "Not Balanced Tree" << endl;
    }
    node *root1 = new node(1);
    root1->left = new node(2);
    root1->left->left = new node(3);
    if (is_balanced(root1) && is_Optimal_balanced(root1,&height))
    {
        cout << "Balanced Tree" << endl;
    }
    else
    {
        cout << "Not Balanced Tree" << endl;
    }
    return 0;
}