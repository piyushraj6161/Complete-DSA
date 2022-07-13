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
node *LCA(node* root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* left_lca=LCA(root->left, n1,n2);
    node* right_lca=LCA(root->right, n1,n2);
    if(left_lca && right_lca){
        return root;
    }
    if(left_lca!=NULL){
        return left_lca;
    }
    return right_lca; 
}
int find_dis(node *root,int k,int dis){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dis;
    }
    int left = find_dis(root->left,k, dis+1);
    if(left!=-1){
        return left;
    }
    return find_dis(root->right,k,dis+1);
}
int Dist_bw_node(node*root, int n1, int n2){
    node*lca = LCA(root, n1,n2);
    int d1=find_dis(lca,n1,0);
    int d2=find_dis(lca,n2,0);
    return (d1+d2);
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
    int n1 = 6 , n2 = 7;
   ;
   cout<<Dist_bw_node(root,n1,n2)<<endl;
    return 0;
}