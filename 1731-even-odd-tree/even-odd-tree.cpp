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
 void fun(map<int,vector<int>>&mp,TreeNode* root,int index)
 {
    if(root == NULL)return;
    index++;
    fun(mp,root->left,index);
    if (mp.find(index) == mp.end())mp[index] = vector<int>();
    mp[index].push_back(root->val);
    fun(mp,root->right,index);
}
class Solution
{
public:
    bool isEvenOddTree(TreeNode* root)
    {
        if(root->val % 2 == 0)return false;
        map<int,vector<int>>mp;
        mp[0].push_back(root->val);
        fun(mp,root,1);
        for (auto pair : mp)
        {
            int index = pair.first;
            vector<int>vec = pair.second;
            if (index % 2 == 0)
            {
                if(vec.size() == 1)
                {
                    if (vec[0] % 2 == 0)return false;
                }
                else
                {
                    for (int i = 1; i < vec.size(); ++i)
                    {
                        if (vec[i] % 2 == 0 || vec[i] <= vec[i - 1])return false;
                    }
                }
            }
            else
            {
                 if(vec.size() == 1)
                {
                    if (vec[0] % 2 == 1)return false;
                }
                else
                {
                    for (int i = 1; i < vec.size(); ++i)
                    {
                        if (vec[i] % 2 == 1 || vec[i] >= vec[i - 1])return false;
                    }
                }
            }
        }
        return true;
    }
};