class Solution {
public:
  


    void dfs(int rows, int cols,vector<vector<char>>& grid,vector<vector<bool>>& visited ,int m,int n){
        visited[rows][cols]=true;
        if(rows-1 >=0 && !visited[rows-1][cols]&& grid[rows-1][cols]=='1') dfs(rows-1,cols,grid,visited,m,n);
        if(rows+1<m && !visited[rows+1][cols]&& grid[rows+1][cols]=='1') dfs(rows+1,cols,grid,visited,m,n);
        if(cols+1<n && !visited[rows][cols+1]&& grid[rows][cols+1]=='1') dfs(rows,cols+1,grid,visited,m,n);
        if(cols-1>=0 && !visited[rows][cols-1]&& grid[rows][cols-1]=='1') dfs(rows,cols-1,grid,visited,m,n);

    }
    
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<bool>> visited(rows,vector<bool>(cols,false));
        int count=0;

        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                if(!visited[i][j] && grid[i][j]=='1'){ dfs(i,j,grid,visited,rows,cols);
                count++;
                }

            }
        }

       return count;
     
    }
};