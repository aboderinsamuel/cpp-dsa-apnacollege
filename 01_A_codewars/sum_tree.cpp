// Return the sum of all values in the tree, including the root
struct node{
    int value;
    node* left;
    node* right;
};
int sumTheTreeValues(node* root) {
    if(root == 0) return 0;
    return root->value + sumTheTreeValues(root -> left) + sumTheTreeValues(root -> right);
};