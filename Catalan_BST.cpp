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
vector<node *> construct_tree(int start, int end)
{
    vector<node *> trees;
    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for (int i = start; i <= end; i++)
    {
        vector<node *> left_subtree = construct_tree(start, i - 1);
        vector<node *> right_subtree = construct_tree(i + 1, end);
        // cout<<left_subtree.size()<<" "<<right_subtree.size()<<endl;
        for (int j = 0; j < left_subtree.size(); j++)
        {
            for (int k = 0; k < right_subtree.size(); k++)
            {
                node *left = left_subtree[j];
                node *right = right_subtree[k];
                node *temp = new node(i);
                temp->left = left;
                temp->right = right;
                trees.push_back(temp);
            }
        }
    }
    return trees;
}
void pre_order(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);
}
int main()
{
    vector<node *> total_tree = construct_tree(1, 3);
    for (int i = 0; i < total_tree.size(); i++)
    {
        cout << (i + 1) << " : ";
        pre_order(total_tree[i]);
        cout << endl;
    }
}