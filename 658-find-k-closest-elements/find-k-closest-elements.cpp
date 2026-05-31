class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;

        for(int ele : arr){
            q.push({abs(x-ele),ele});

        }
        vector<int> ans;
        while(k>0){
             ans.push_back(q.top().second);
             q.pop();
             --k;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};