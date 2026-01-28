#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

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
