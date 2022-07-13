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

bool getpath(node *root, int key, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if (root->data == key)
    {
        return true;
    }
    if (getpath(root->left, key, path) || getpath(root->right, key, path))
    {
        return true;
    }
    path.pop_back();
    return false;
}

int LCA(node *root, int n1, int n2)
{
    vector<int> path1, path2;
    if (!getpath(root, n1, path1) || !getpath(root, n2, path2))
    {
        return -1;
    }
    int pc;
    for (pc = 0; pc < path1.size() && path2.size(); pc++)
    {
        if (path1[pc] != path2[pc])
        {
            break;
        }
    } 
    return path1[pc - 1];
}
//************ 2nd method   ***************
node *LCA_2(node* root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* left_lca=LCA_2(root->left, n1,n2);
    node* right_lca=LCA_2(root->right, n1,n2);
    if(left_lca && right_lca){
        return root;
    }
    if(left_lca!=NULL){
        return left_lca;
    }
    return right_lca; 
}

/*         1
          /  \
         2    3
        /    / \
       4    5   6
           /
          7 
*/

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    int n1 = 5 , n2 = 7;
    int lca = LCA(root, n1, n2);
    cout << "LCA_1 : " << lca << endl;
    node* new_node = LCA_2(root, n1, n2);
    cout << "LCA_2 : " << new_node->data << endl;
    return 0;
}