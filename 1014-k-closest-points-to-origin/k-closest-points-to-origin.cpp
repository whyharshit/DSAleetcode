class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>>  q;
        
        for(vector<int> ele : points){

            q.push({(ele[0]*ele[0]+ele[1]*ele[1]),ele});
        }
        vector<vector<int>> ans;
        while(k>0){
            ans.push_back(q.top().second);
            q.pop();
            --k;
        }
        return ans;

    }
};