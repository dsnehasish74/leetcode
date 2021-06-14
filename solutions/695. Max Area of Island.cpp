class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=(int)grid.size();
        int m=(int)grid[0].size();
        vector<vector<int>>seen(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int temp=0;
                if(seen[i][j]==0 && grid[i][j]==1){
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    seen[i][j]=1;
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        cout<<x<<" "<<y<<" "<<ans<<endl;
                        q.pop();
                        temp++;
                        if(x-1>=0 && grid[x-1][y] && seen[x-1][y]==0){
                            q.push({x-1,y});
                            seen[x-1][y]=1;
                        }
                        if(x+1<n && grid[x+1][y] && seen[x+1][y]==0){
                            q.push({x+1,y});
                            seen[x+1][y]=1;
                        }
                        if(y-1>=0 && grid[x][y-1] && seen[x][y-1]==0){
                            q.push({x,y-1});
                            seen[x][y-1]=1;
                        }
                        if(y+1<m && grid[x][y+1] && seen[x][y+1]==0){
                            q.push({x,y+1});
                            seen[x][y+1]=1;
                        }
                    }
                }
                if(temp>ans)ans=temp;
            }
        }
        
        return ans;
    }
};
