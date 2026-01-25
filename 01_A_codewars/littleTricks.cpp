#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int digitalRoot(int n) {
    if (n == 0) return 0;
    return 1 + (n - 1) % 9;
}; // recursive sum

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
struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;
};

class Solution
{
public:
    static int maxSum(TreeNode* root)
    {
        if(!root) return 0;
        if(!root->left && !root->right) return root->value;

        int leftSum = root->left ? maxSum(root->left) : INT_MIN;
        int rightSum = root->right ? maxSum(root->right) : INT_MIN;

        return root->value + max(leftSum, rightSum);

    }
};
