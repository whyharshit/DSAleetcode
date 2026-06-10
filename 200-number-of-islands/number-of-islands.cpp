class Solution {
public:
    
    int numIslands(vector<vector<char>>& grid) {


        int m= grid.size();
        int n = grid[0].size();
        vector<bool>visited(n*m,false);
        int island =0;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(grid[i][j]=='1' &&!visited[i*n+j] ){
                queue<pair<int,int>> q;
                q.push({i,j});
                visited[i*n+j]=true;
                while(!q.empty()){
                    auto curr = q.front();
                    int row = q.front().first;
                    int col = q.front().second;
                    q.pop();
                    if(row+1<m && !visited[(row+1)*n +col] && grid[row+1][col]=='1') {
                        visited[(row+1)*n +col]=true;
                        q.push({row+1,col});
                    }
                    if(col+1<n && !visited[(row)*n +col+1] && grid[row][col+1]=='1') {
                        visited[row*n +col+1]=true;
                        q.push({row,col+1});
                    }

                    if(row-1>=0 && !visited[(row-1)*n +col] && grid[row-1][col]=='1') {
                        visited[(row-1)*n +col]=true;
                        q.push({row-1,col});
                    }
                    if(col-1>=0 && !visited[(row)*n+col-1] && grid[row][col-1]=='1') {
                        visited[row*n+col-1]=true;
                        q.push({row,col-1});
                    }
                }
                            island++;
                            }

        }}


        

        return island;
    }
};