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
public:
    bool getAns(TreeNode* root, int targetSum,int sum){
        if(root==NULL)return targetSum==sum;
        
        sum+=root->val;
        if(root->left ==NULL){
            return getAns(root->right,targetSum,sum);  
        }else if(root->right==NULL){
            return getAns(root->left,targetSum,sum);
        }else{
            return getAns(root->left,targetSum,sum) || getAns(root->right,targetSum,sum); 
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        if(root==NULL)return false;
        
        return getAns(root,targetSum,sum);
    }
};
