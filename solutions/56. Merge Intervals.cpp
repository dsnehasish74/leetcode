class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int>inter(2);
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
         inter[0]=intervals[0][0];
         inter[1]=intervals[0][1];
        for(int i=1;i<(int)intervals.size();i++){
            if(intervals[i][0]<=inter[1]){
                inter[1] = max(inter[1],intervals[i][1]);
            }
            else{
                 ans.push_back(inter);
                 inter[0]=intervals[i][0];
                 inter[1]=intervals[i][1];
            }
            
        }
        
        ans.push_back(inter);
        
        return ans;
    }
};
