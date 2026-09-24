class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i =0;
        int j=0;
        int flag=0;
        int maxlen=0;
        while(nums.size()>j){
            if(nums[j]==0)flag++;
                   
           
            while(flag>k){
                    
                    if(nums[i]==0) flag--;
                    i++;
                }
            maxlen=max(maxlen,j-i+1);
            ++j;
         

        }

        return maxlen;
    }
};