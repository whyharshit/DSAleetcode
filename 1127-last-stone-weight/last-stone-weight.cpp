class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        if(stones.size()==0) return 0;
        if(stones.size()==1) return stones[0];
        for(int ele : stones){
            q.push(ele);
        }
        
        while(q.size()>2){

            int t =q.top();
              q.pop();
              int w =t-q.top();
              if(abs(t-q.top())>0){
                q.pop();
                q.push(w);
              }
              else q.pop();
        }
        if(q.size()==2){
        int t = q.top();
        q.pop();
        return t-q.top();
        }
        return q.top();
    }
};