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
node *sorted_array_bst(int arr[],int start, int end){
    if(start>end){
        return NULL;
    }
    int mid = (start+end)/2;
    node* root=new node(arr[mid]);
    root->left=sorted_array_bst(arr,start,mid-1);
    root->right=sorted_array_bst(arr,mid+1,end);
    return root;
}

void pre_order(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}

int main()
{
 int arr[]={10,20,30,40,50};
 node*root=sorted_array_bst(arr,0,4);
 pre_order(root);
cout<<endl;
    return 0;
}