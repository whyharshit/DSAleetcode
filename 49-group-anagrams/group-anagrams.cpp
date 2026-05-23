class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string ,vector<string>> map1;
        vector<vector<string>> ans;

        for(string ele: strs){
              string s = ele;
              sort(s.begin(),s.end());
              map1[s].push_back(ele);

        }

        for(auto x : map1){
            ans.push_back(x.second);
        }
       
      return ans;
         


    }
};