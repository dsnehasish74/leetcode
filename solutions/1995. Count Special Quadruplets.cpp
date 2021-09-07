class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>u;
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(u.find(nums[j]-nums[i])!=u.end()){
                    c+=u[nums[j]-nums[i]];    
                }
            }
            
            for(int j=0;j<i;j++){
                if(u.find(nums[i]+nums[j])!=u.end())
                u[nums[i]+nums[j]]++;
                else u.insert({nums[i]+nums[j],1});
            }
        }
        
        return c;
        
    }
};
