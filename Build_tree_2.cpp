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
int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
node *Build_tree(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4;
    if (start > end)
    {
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    node *temp = new node(curr);
    if (start == end)
    {
        return temp;
    }
    int pos = search(inorder, start, end, curr);
    temp->right = Build_tree(postorder, inorder, pos + 1, end);
    temp->left = Build_tree(postorder, inorder, start, pos - 1);
    return temp;
}
void Inorder_print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder_print(root->left);
    cout << root->data << " ";
    Inorder_print(root->right);
}
/*         1
          /  \
         2    3
        / \  / \
       4   5 6  7
*/

int main()
{
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4, 2, 1, 5, 3};
    // Build_tree
    node *root = Build_tree(postorder, inorder, 0, 4);
    Inorder_print(root);
    cout << endl;
    return 0;
}