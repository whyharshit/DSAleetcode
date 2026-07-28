class Solution {
public:

    bool search(vector<int>& nums, int target) {
      
       int lo=0;
       int hi=nums.size()-1;

       int mid;
       while(hi>=lo){
        mid = lo+ (hi-lo)/2;

        if(nums[mid]==target) return true;
        if(nums[mid]==nums[lo] && nums[mid]==nums[hi]){
            lo++;
            hi--;
            continue;
        }

        if(nums[mid]>=nums[lo]){
           
           
           if(nums[mid]>target && target>=nums[lo]){
            hi=mid-1;
           }
           else{
            lo=mid+1;
           }




        }

        else{
            if(nums[hi]>=target  && target >nums[mid]) {
                lo=mid+1;
            }

            else{
                hi=mid-1;
            }




        }





       }
       return false;


    }
};