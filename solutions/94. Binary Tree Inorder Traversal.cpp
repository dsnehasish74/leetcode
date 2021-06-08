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
    vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {
        // if(root==NULL)return ans;
        // inorderTraversal(root->left);
        // ans.push_back(root->val);
        // inorderTraversal(root->right);
        // return ans;
        
        stack<TreeNode*>s;
        while(root || !s.empty()){
            while(root){
                s.push(root);
                root=root->left;
            }
            ans.push_back(s.top()->val);
            root=s.top()->right;
            s.pop();
            
        }
        
        return ans;
    }
};
