// Time Complexity: O(log N)
// Space Complexity: O(N)

// Recursive Approach
class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (!root)
            return NULL;
        if (root->val == val)
            return root;
        else if (root->val < val)
            return searchBST(root->right, val);
        else
            return searchBST(root->left, val);
    }
};

// Iterative Approach
// Space COmplexity; o(1)

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        while (root)
        {
            if (root->val == val)
                return root;
            else if (root->val < val)
                root = root->right;
            else
                root = root->left;
        }
        return NULL;
    }
};