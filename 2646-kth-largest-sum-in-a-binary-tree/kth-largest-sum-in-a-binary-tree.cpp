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
    void helper(TreeNode *root,vector<vector<long long>>&vt,int c){
        if(root==NULL) return;
        if(vt.size()==c){
            vt.push_back({root->val});
        }
        else{
            vt[c].push_back(root->val);
        }
        helper(root->left,vt,c+1);
        helper(root->right,vt,c+1);
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<vector<long long>>vt;
        helper(root,vt,0);
        vector<long long>ans;
        for(int i=0;i<vt.size();i++){
            long long s=0;
            for(int j=0;j<vt[i].size();j++){
                s+=vt[i][j];
            }
            ans.push_back(s);
        }
        sort(ans.begin(),ans.end());
        long long i=ans.size();
        if(k>ans.size()) return -1;
        return ans[i - k];
        // while(1){
        //     if(k==0){
        //         return ans[i];
        //     }
        //     else{
        //         k--;
        //         i--;
        //     }
        // }
        // return -1;
    }
};