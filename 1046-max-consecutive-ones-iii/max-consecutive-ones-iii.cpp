class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int lft =0;
        int rgt=0;
        int zeros=0;
        int maxlen=0;
        while(rgt<nums.size()){
             
            if(nums[rgt]==1){
            maxlen=max(maxlen,rgt-lft+1);
            rgt++;
            }
            else{
                if(zeros<k){
                    maxlen=max(maxlen,rgt-lft+1);
                    rgt++;
                    zeros++;
                }
                else{
                    while(nums[lft]!=0){
                        lft++;
                    }
                    lft++;
                    zeros--;

                }


            }


        }
        return maxlen;

    }
};