class Solution {
public:
    

   void bfs(vector<vector<int>>&graph,int src,vector<bool>& visited){
        queue<int> q;
        q.push(src);
        visited[src]=true;
    
        while(!q.empty()){
            int curr =  q.front();
            q.pop();
            for(auto x : graph[curr])
            if(!visited[x]){
               visited[x]=true;
               q.push(x);
            }

        }

        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
       int n = isConnected.size();
        vector<vector<int>> graph(n);

        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(i!=j && isConnected[i][j]==1) graph[i].push_back(j);
            }
     
        }

        vector<bool>visited(n,false);
        int provinces =0;
        for(int i=0;i<n;++i){
           if(!visited[i]){
            bfs(graph,i,visited);
            ++provinces;
           }

        }
        return provinces;
        
        

        
    }
};