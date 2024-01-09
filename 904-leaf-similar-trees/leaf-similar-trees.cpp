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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        leafnodes(root1,v1);
        leafnodes(root2,v2);
        return v1==v2;

        
    }
    void leafnodes(TreeNode* root,vector<int>&v3){
        if(!root){
            return;
        }
        if(!root->left && !root->right)
        {
            v3.push_back(root->val);
            return;

        }
        leafnodes(root->left,v3);
        leafnodes(root->right,v3);

    }
};