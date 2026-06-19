class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> q;
        int m= image.size();
        int n=image[0].size();
        vector<vector<int>>visited(m, vector<int>(n, 0));
        q.push({sr,sc});
        int org = image[sr][sc];
       
        while(!q.empty()){
            int rc[]={-1,1,0,0};
            int cc[]={0,0,-1,1};
            int r = q.front().first;
            int c = q.front().second;
            image[r][c]=color;
            visited[r][c]=1;
            q.pop();
            for(int i=0;i<4;++i){
                int rf=r+rc[i];
                int cf=c+cc[i];
                if(rf>=0 && rf<image.size() && cf>=0 && cf<image[0].size()){
                   if((image[rf][cf]==org) && visited[rf][cf]!=1)q.push({rf,cf});


                }


            }

           







        }

        
            return image;

        
        
    }
};