class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int>ans;
        for(int i=0;i<nums.size();++i){
            mp[i] = nums[i];
           for(auto it : mp){
            if(it.second==target-nums[i] && it.first !=i){
                
                ans.push_back(it.first);
                ans.push_back(i);
            
            }
           }
           
        }

        return ans;
    }
};