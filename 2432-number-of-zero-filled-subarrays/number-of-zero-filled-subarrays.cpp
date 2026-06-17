class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
              int lft=0;
              int rgt=0;
              int freq=0;
              long long maxlen=0;
              
              while(rgt<nums.size()){
                if(nums[rgt]==0) freq++;
                while(nums[rgt]==0 && freq!=rgt-lft+1) {
                    if(nums[lft]==0) freq--;
                    lft++;
                }
                if(nums[rgt]==0) maxlen=maxlen+rgt-lft+1;
                rgt++;
                 

              }

              return maxlen;
    }
};