class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum =0;
        int max1 = INT_MIN;
        for(int ele : nums){
            if(ele==1) sum++;
            else{
                  max1= max(sum,max1);
                  sum=0;
            }
        }
        max1=max(sum,max1);
        return max1;
    }
};