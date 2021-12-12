class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;  // start + end/2 - start/2 = start/2 + end/2 = (start+end)/2
            int mid_element=nums[mid]; 
            if(mid_element==target)return mid;
            else if(mid_element<target) start=mid+1;
            else end=mid-1;
        }
        
        return -1;
        
    }
};
