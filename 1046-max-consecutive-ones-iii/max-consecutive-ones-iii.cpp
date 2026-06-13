class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int lft=0;
      int rgt=0;
      int flip=0;
      int maxlen=INT_MIN;

      while(rgt<nums.size()){
        if(nums[rgt]==1)rgt++;
        else{
            if(flip<k){
                rgt++;
                flip++;
            }
            else{
                maxlen=max(maxlen,rgt-lft);
                while(nums[lft]!=0){
                    lft++;
                }
                lft++;
                flip--;
            }

            
        }
      }
      maxlen=max(maxlen,rgt-lft);
      return maxlen;


    }
};