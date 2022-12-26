//Time Complexity: O(N)
//Space Complexity: O(1)


class Solution
{
private:
    int recurFunc(TreeNode *root, bool &isBalan)
    {
        if (!root)
            return 0;
        int leftHeight = recurFunc(root->left, isBalan);
        int rightHeight = recurFunc(root->right, isBalan);
        if (abs(leftHeight - rightHeight) > 1)
            isBalan = false;
        return 1 + max(leftHeight, rightHeight);
    }

public:
    bool isBalanced(TreeNode *root)
    {
        bool isBalan = true;
        recurFunc(root, isBalan);
        return isBalan;
    }
};