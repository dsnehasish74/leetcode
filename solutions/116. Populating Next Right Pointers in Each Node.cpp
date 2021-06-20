/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;
​
    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
​
    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
​
    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
​
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)return NULL;
        queue<Node*>q;
        
        q.push(root);
        
        while(!q.empty()){
            
            int n=q.size();
            vector<Node*> ans;
            
            for(int i=0;i<n;i++){
                Node* x=q.front();
                q.pop();
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
                
                ans.push_back(x);
            }
            
            for(int i=0;i<n;i++){
                if(i!=n-1)
                    ans[i]->next=ans[i+1];
                else
                    ans[i]->next=NULL;
                
            }
        }
        
        return root;
        
    }
};
