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
class Solution {
public:
   bool findPath(TreeNode* root, int value, string& path) {
    if (root == nullptr) return false;
    if (root->val == value) return true;
    
    path += 'L';
    if (findPath(root->left, value, path)) return true;
    path.pop_back();
    
    path += 'R';
    if (findPath(root->right, value, path)) return true;
    path.pop_back();
    
    return false;
}

string getDirections(TreeNode* root, int startValue, int destValue) {
    string startPath, destPath;
    findPath(root, startValue, startPath);
    findPath(root, destValue, destPath);
    
    // Find the common part of the paths
    int i = 0;
    while (i < startPath.size() && i < destPath.size() && startPath[i] == destPath[i]) {
        i++;
    }

    // Steps to move up to the common ancestor
    string upSteps(startPath.size() - i, 'U');
    // Steps to move down to the destination
    string downSteps = destPath.substr(i);

    return upSteps + downSteps;
    }
};