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
int max_path_sum_Utill(node *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = max_path_sum_Utill(root->left, ans);
    int right = max_path_sum_Utill(root->right, ans);
    int node_max = max(max(root->data, root->data + left + right), max(root->data + left, root->data + right));
    ans = max(ans, node_max);
    int single_path_sum = max(root->data, max(root->data + left, root->data + right));
    return single_path_sum;
}
int max_path_sum(node *root)
{
    int ans = INT_MIN;
    max_path_sum_Utill(root, ans);
    return ans;
}

/*        1
        /   \
       2     3
      /       \
     4         5

*/

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->right = new node(5);
    cout <<max_path_sum(root) <<endl;
    return 0;
}