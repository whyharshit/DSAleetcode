class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
         vector<vector<int>> graph(n);

         for(int i=0;i<edges.size();++i){
            int u = edges[i][0];
            int v = edges[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);

            }

            queue<int> q;
            q.push(source);
            vector<bool> visited(n,false);
            visited[source]=true;
            while(!q.empty()){
                int curr = q.front();
                if(curr == destination) return true;
                q.pop();
                for(auto neighbour: graph[curr]){
                    if(!visited[neighbour]){
                        visited[neighbour]=true;
                        q.push(neighbour);
                    }
                }
            }
            return false;



         }
    
};