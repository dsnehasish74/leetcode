class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<long long>dist(n+1,INT_MAX);
        dist[k]=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<times.size();j++){
                dist[times[j][1]]=min(dist[times[j][1]],dist[times[j][0]]+times[j][2]);
            }
        }
        long long ans=INT_MIN;
        for(int i=1;i<=n;i++){
            ans=max(ans,dist[i]);
        }
        
        return ans!=INT_MAX?ans:-1;
    }
};
