class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)return 0;
        int start=0,end=n-1;
        int possible_position=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            int mid_element=nums[mid];
            if(mid_element==target)return mid;
            else if(mid_element<target) start=mid+1;
            else{
                possible_position=mid;
                end=mid-1;
            }
        }
        
        return possible_position;
    }
};
