/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int fun(TreeNode* root)
    {
        if(root==NULL)return 0;
        return 1+max(fun(root->left), fun(root->right));
    }
int diameterOfBinaryTree(TreeNode* root)
{
        
    if(root==NULL)return 0;
    int cnt1 = fun(root->left) + fun(root->right); 
    int cnt2 = diameterOfBinaryTree(root->left);
    int cnt3 = diameterOfBinaryTree(root->right);
    return max(cnt1, max(cnt2, cnt3));
}
};