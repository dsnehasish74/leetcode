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
    
    
    int search(vector<int>& inorder,int key,int start,int end){
        for(int i=start;i<=end;i++){
            if(inorder[i]==key)return i;
        }
        return INT_MIN;
    }
    
    TreeNode* getTree(vector<int>& preorder,vector<int>&inorder,int start,int end,int &preIndex){
        
        
        if(start>end)return NULL;
        
        TreeNode* root= new TreeNode(preorder[preIndex]);
        preIndex++;
        
        if(start==end)return root;
        int rootIndex=search(inorder,root->val,start,end);
        root->left=getTree(preorder,inorder,start,rootIndex-1,preIndex);
        root->right=getTree(preorder,inorder,rootIndex+1,end,preIndex);
        return root;
    }
        
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int preIndex=0;
        return getTree(preorder,inorder,0,(int)preorder.size()-1,preIndex);
    }
};
