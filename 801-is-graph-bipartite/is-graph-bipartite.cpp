class Solution {
public:
    bool  bfs(vector<vector<int>>& graph, vector<int>& visited,
    int i){
        visited[i]=0;
        queue<int> q;
        q.push(i);
        while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto neigh: graph[curr]){
            if(visited[neigh]==-1){
                visited[neigh]=!(visited[curr]);
                q.push(neigh);
            }
            else{
                if(visited[neigh]==visited[curr]) return false;
            }
        }



       
         } return true; }
    
    bool isBipartite(vector<vector<int>>& graph) {

    vector<int> visited(graph.size(), -1);

    for(int i=0;i<graph.size();i++)
    {
        if(visited[i]==-1)
        {
            if(!bfs(graph, visited, i))
                return false;
        }
    }

    return true;
}

};