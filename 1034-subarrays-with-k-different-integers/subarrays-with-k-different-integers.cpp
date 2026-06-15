class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;
        int lft=0;
        int rgt=0;
        int count1=0;
        int count2=0;
        while(rgt<nums.size()){
            mp[nums[rgt]]++;
            while(mp.size()>k && rgt>=lft){
                mp[nums[lft]]--;                            
                if(mp[nums[lft]]==0) mp.erase(nums[lft]);
                lft++;
            }
            count1+=rgt-lft+1;
            rgt++;

        }
        lft=0;
        rgt=0;

         while(rgt<nums.size()){
            mp1[nums[rgt]]++;
            while(mp1.size()>=k && rgt>=lft){
                mp1[nums[lft]]--;                            
                if(mp1[nums[lft]]==0) mp1.erase(nums[lft]);
                lft++;
            }
            count2+=rgt-lft+1;
            rgt++;

        }
        return count1-count2;
    }
};