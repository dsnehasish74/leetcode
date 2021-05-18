/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL)return false;
        if(head->next==NULL){
            return true;
        }
        ListNode* f=head;
        ListNode* s=head;
        ListNode* prev=NULL;
        ListNode* temp;
        while(f->next!=NULL && f->next->next!=NULL){
            f=f->next->next;
            s=s->next;
        }
        ListNode* ssh=s->next;
        s->next=NULL;
        while(ssh!=NULL){
            temp=ssh->next;
            ssh->next=prev;
            prev=ssh;
            ssh=temp;
        }
        
​
        ListNode* fsh=head;
        while(fsh!=NULL && prev!=NULL){
            if(fsh->val!=prev->val){
                return false;
            }
            
            fsh=fsh->next;
            prev=prev->next;
        }
        
        return true;
        
    }
};
