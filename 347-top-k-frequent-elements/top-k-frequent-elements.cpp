class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        priority_queue<pair<int,int>> q;
         for(int ele : nums){
            m[ele]++;
         }
         
         vector<int> ans;
        for(auto it : m){
            q.push({it.second,it.first});
        }

        while(k>0){
            ans.push_back(q.top().second);
            q.pop();
            
            --k;
        }

        return ans;
    }
};