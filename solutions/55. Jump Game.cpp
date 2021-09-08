class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int r=0,n=nums.size();
        
        for(int i=0;i<n;i++){
            if(i>r)return false;
            
            r=max(r,i+nums[i]);
        }
        
        return true;
        
    }
};
