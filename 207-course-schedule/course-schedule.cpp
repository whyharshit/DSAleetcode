class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
         vector<vector<int>> graph(numCourses);

         for(int i=0;i<prerequisites.size();++i){
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);

         }

         vector<int> indegree(numCourses,0);
         for(int i=0; i<prerequisites.size();++i){
            indegree[prerequisites[i][0]]++;
         }
         queue<int> q;
         for(int i=0;i<indegree.size();++i){
            if(indegree[i]==0) q.push(i);
         }

         int count=0;
         while(!q.empty()){
            int front = q.front();
            q.pop();
            count++;
            for(auto x : graph[front]){
                indegree[x]--;
                if(indegree[x]==0) q.push(x);
            }

         }
         if(count==numCourses) return true;
         return false;

    }
};