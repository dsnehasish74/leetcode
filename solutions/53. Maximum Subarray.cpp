class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxe=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxe=max(sum,maxe);
            if(sum<0){
                sum=0;
            }
        }
        
        return maxe;
        
    }
};
