class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v(102,0);
        for(int i=0;i<nums.size();i++){
            v[nums[i]+1]+=1;
            // cout<<nums[i]-1<<" "<<v[0]<<endl;
        }
        for(int i=1;i<102;i++){
            v[i]+=v[i-1];
        }
        // cout<<v[8]<<endl;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(v[nums[i]]);
        }
        
        return ans;
    }
};
