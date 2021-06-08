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
    /************ Using Recursion ****************************
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)return ans;
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return ans;
    }
    
    ************************************************************/
    /************* using iteration *****************************/
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return ans;
        stack<TreeNode*>s;
        while(root || !s.empty()){
            if(root){
             ans.push_back(root->val);
             if(root->right!=NULL)
                s.push(root->right);
             root=root->left;
            }else{
                root=s.top();
                s.pop();
            }
       }
        
       return ans;
    }
};
