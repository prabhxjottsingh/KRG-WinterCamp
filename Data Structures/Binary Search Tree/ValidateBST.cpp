//Time Complexity: O(N)
//Space Complexity: O(N) --Recursion Stack Space--

class Solution
{
public:
    bool isValidBST(TreeNode *root, long long mini = INT_MAX + 1ll, long long maxi = INT_MIN - 1ll)
    {
        if (!root)
            return true;
        if (root->val >= mini)
            return false;
        if (root->val <= maxi)
            return false;
        bool case1 = isValidBST(root->left, root->val, maxi);
        bool case2 = isValidBST(root->right, mini, root->val);
        return (case1 && case2);
    }
};