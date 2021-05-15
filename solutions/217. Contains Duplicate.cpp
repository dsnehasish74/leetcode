class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        
        for(int i=0;i<(int)nums.size();i++){
            s.insert(nums[i]);
        }
        
        if(s.size()==nums.size())return false;
        else return true;
    }
};
