class Solution {
public:
       void bfs(vector<vector<int>>& graph,
             int src,
             vector<bool>& visited)
    {
        queue<int> q;
        q.push(src);
        visited[src] = true;

        while(!q.empty())
        {
            int curr = q.front();
            q.pop();

            for(int neighbour : graph[curr])
            {
                if(!visited[neighbour])
                {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
    }


    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
         vector<bool> visited(rooms.size(),false);
         bfs(rooms,0,visited);
         for(auto x: visited){
            if(x==false) return false;
         }

         return true;

    }
};