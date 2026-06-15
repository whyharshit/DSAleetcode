class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       int lft = 0;
       int rgt =0;
       int sum=0;
       int count1=0;
       int count2=0;
       while(rgt<nums.size()){
        if(nums[rgt]%2!=0)sum++;
        while(sum>k && lft<=rgt){
            if(nums[lft]%2!=0) sum--;
            lft++;
        }
        count1+=rgt-lft+1;
        rgt++;
       }
       lft=0;
       rgt=0;
       sum=0;


       while(rgt<nums.size()){
        if(nums[rgt]%2!=0)sum++;
        while(sum>=k && lft<=rgt){
            if(nums[lft]%2!=0) sum--;
            lft++;
        }
        count2+=rgt-lft+1;
        rgt++;
       }
       return count1-count2;
    }
};