class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
         vector<int> helper(nums.size()+1,-1);
         int occurs =0;

         for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                occurs++;
                helper[occurs]=i;
            }
         }

         vector<int> ans;
         for(auto y: queries){
             if(y>nums.size()) ans.push_back(-1);
             else ans.push_back(helper[y]);
         }

         return ans;
    }
};