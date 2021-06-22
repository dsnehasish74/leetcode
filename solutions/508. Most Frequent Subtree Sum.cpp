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
    int getSubtree(TreeNode* root,unordered_map<int,int>&u){
        
        if(root==NULL)return 0;
        int lsub=getSubtree(root->left,u);
        int rsub=getSubtree(root->right,u);
        
        int sub=lsub+rsub+root->val;
        
        if(u.find(sub)!=u.end()){
            u[sub]++;
        }else{
            u.insert({sub,1});
        }
        
        return sub;
    }
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int,int>u;
        getSubtree(root,u);
        int fmax=INT_MIN;
        for(auto it: u){
            if(it.second>fmax)fmax=it.second;
        }
        vector<int>ans;
        for(auto it: u){
            if(it.second==fmax)ans.push_back(it.first);
        }
        
        
        return ans;
        
        
    }
};
