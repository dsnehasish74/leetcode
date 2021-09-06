class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        
        for(int i=0;i<n;i++){
            int x=(i!=0)?nums[i-1]:0;
            int y=nums[n-1]-nums[i];
            if(x==y)return i;
        }
        
        return -1;
    }
};
