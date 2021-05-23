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
    pair<int,int> findans(TreeNode* root){
        
        if(root==NULL){
            return make_pair(0,-1);
        }
        
        pair<int,int> fl=findans(root->left);
        pair<int,int> fr=findans(root->right);
        
        int f=max(fl.second,fr.second)+1;
        
        int sp=fl.second+fr.second+2;
        
        int d=max(max(fl.first,fr.first),sp);
        
        return make_pair(d,f);
    } 
    
    int diameterOfBinaryTree(TreeNode* root) {
        return findans(root).first;
    }
};
