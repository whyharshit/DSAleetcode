class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo= 0;
        int hi=nums.size()-1;
        int mid;
        int min1=INT_MAX;
        while(hi>=lo){
            mid=lo+(hi-lo)/2;
            
            if(nums[mid]>=nums[lo]){
                min1=min(nums[lo],min1);
                lo=mid+1;
            }
            else{
                min1=min(nums[mid],min1);
                hi=mid-1;
            }

        }
        return min1;
    }
};