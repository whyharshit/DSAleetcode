class Solution {
public:
    
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q;
        int m=grid.size();
        int n=grid[0].size();
        int countfresh=0;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
               if(grid[i][j]==2) q.push({{i,j},0});
               if(grid[i][j]==1) countfresh++;
            }


        }
        if(countfresh==0) return 0;
        int t;
        int count=0;
        while(!q.empty()){
             int r = q.front().first.first;
             int c = q.front().first.second;
              t=  q.front().second;
             q.pop();
             int dr[]={-1,1,0,0};
             int dc[]={0,0,-1,1};
             for (int k=0;k<4;++k){
                if(r+dr[k]>=0 && m-1>=r+dr[k] && n-1>=c+dc[k] && c+dc[k]>=0){
                    if(grid[r+dr[k]][c+dc[k]]==1){
                        grid[r+dr[k]][c+dc[k]]=2;
                        count++;
                        q.push({{r+dr[k],c+dc[k]},t+1});
                    }
                }
             }
             







        }
        if(count!=countfresh) return -1;

            return t;
    }
};