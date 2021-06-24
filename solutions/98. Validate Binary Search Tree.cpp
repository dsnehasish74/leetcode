/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
    bool getAns(TreeNode* root,long long min_e,long long max_e){
        if(root==NULL)return true;
        if(root->val<=min_e || root->val>=max_e )return false;
        
        return getAns(root->left,min_e,root->val)&& getAns(root->right,root->val,max_e);
    }
    
public:
    bool isValidBST(TreeNode* root) {
        long long x=INT_MIN;
        long long y=INT_MAX;
        return getAns(root,x-7,y+7);
    }
};
