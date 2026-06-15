class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int lft=0;
        int rgt=0;
        int count=0;
        int sum=0;

        while(rgt<nums.size()){
            sum+=nums[rgt];
            while(sum>goal && lft<=rgt){
                if(nums[lft]==1)sum--;
                lft++;
            }
            if(goal>=sum) count+=rgt-lft+1;
             rgt++;
        }
        rgt=0;
        lft=0;
        sum=0;
        int count2 =0;
         while(rgt<nums.size()){
            sum+=nums[rgt];
            while(sum>=goal && lft<=rgt){
                if(nums[lft]==1)sum--;
                lft++;
            }
            if(goal>sum) count2+=rgt-lft+1;
             rgt++;
        }
        


        return count-count2;

    }
};