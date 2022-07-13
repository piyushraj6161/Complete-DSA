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
class info
{
public:
    int size;
    int max;
    int min;
    int ans;
    bool is_bst;
    // info(int size, int max, int min, int ans, bool is_bst)
    // {
    //     size = 0;
    //     max = INT_MIN;
    //     min = INT_MAX;
    //     ans = 0;
    //     is_bst = true;
    // }
};

info largest_bst(node *root)
{
    if (root == NULL)
    {
        // return {0, INT_MIN, INT_MAX, 0, true};
        // return info(0, INT_MIN, INT_MAX, 0, true);
        info temp;
        //={0, INT_MIN, INT_MAX, 0, true};
        temp.size = 0;
        temp.max = INT_MIN;
        temp.min = INT_MAX;
        temp.ans = 0;
        temp.is_bst = true;
        return temp;
    }
    if (root->left == NULL && root->right == NULL)
    {
        // return {1, root->data, root->data, 1, true};
        // return info(1, root->data, root->data, 1, true);
        info temp;
        // ()={1, root->data, root->data, 1, true};
        temp.size = 1;
        temp.max = root->data;
        temp.min = root->data;
        temp.ans = 1;
        temp.is_bst = true;
        return temp;
    }
    info left_info = largest_bst(root->left);
    info right_info = largest_bst(root->right);
    info curr;
    curr.size = (1 + left_info.size + right_info.size);
    if (left_info.is_bst && right_info.is_bst && left_info.max < root->data && right_info.min > root->data)
    {
        curr.min = min(left_info.min, min(right_info.min, root->data));
        curr.max = max(right_info.max, max(left_info.max, root->data));
        curr.ans = curr.size;
        curr.is_bst = true;
    }
    else
    {
        curr.ans = max(left_info.ans, right_info.ans);
        curr.is_bst = false;
    }
    return curr;
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
    cout << largest_bst(root).ans << endl;
    return 0;
}