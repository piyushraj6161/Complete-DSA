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
int diameter(node *root) // O(n^2)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);
    int cuurent_diameter = left_height + right_height + 1;
    int left_diameter = diameter(root->left);
    int right_diameter = diameter(root->right);
    return max(cuurent_diameter, max(left_diameter, right_diameter));
}
int Optimal_diameter(node *root, int *height) // O(n)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    int left_height = 0;
    int right_height = 0;
    // cout<<"Before -> Left & right & height : "<<left_height<<" "<<right_height<<" "<<*height<<endl;
    int left_diameter = Optimal_diameter(root->left, &left_height);
    int right_diameter = Optimal_diameter(root->right, &right_height);
    int cuurent_diameter = left_height + right_height + 1;
    *height = max(left_height, right_height) + 1;
    // cout<<"left & right___address & height : "<<&left_height<<" -> "<<left_height<<" "<<&right_height<<" -> "<<right_height<<" "<<height<<" "<<*height<<endl;
    return max(cuurent_diameter, max(left_diameter, right_diameter));
}
/*         1                
          /  \                      
         2    3                         
        / \  / \                        
       4   5 6  7                                       
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
    cout << "Height of tree : " << height(root) << endl;
    cout << "Diameter of tree : " << diameter(root) << endl;
    int height =0; 
    cout << "Optimal_Diameter of tree : " <<endl<<Optimal_diameter(root,&height) << endl;
    return 0;
}