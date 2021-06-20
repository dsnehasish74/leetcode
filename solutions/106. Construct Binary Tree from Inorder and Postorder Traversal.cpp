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
    
    int search(vector<int>& inorder,int start,int end,int val){
        if(start>=end)return -1;
        for(int i=start;i<=end;i++){
            if(inorder[i]==val)return i;
        }
        return -1;
    }
    
    TreeNode* getTree(vector<int>&inorder,vector<int>&postorder,int start,int end, int &postIndex){
    
        if(start>end)return NULL;
        
        TreeNode* root=new TreeNode(postorder[postIndex]);
        postIndex--;
        
        if(start==end)return root;
        int getIndex=search(inorder,start,end,root->val);
        root->right=getTree(inorder,postorder,getIndex+1,end,postIndex);
        root->left=getTree(inorder,postorder,start,getIndex-1,postIndex);
        
        return root;
        
    }
    
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
            int postIndex=(int)postorder.size()-1;
            return getTree(inorder,postorder,0,postorder.size()-1,postIndex);
    }
};
