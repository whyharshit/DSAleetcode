class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int lo=0;
        int hi=nums.size()-1;
        int mid;
        while(hi>=lo){

            mid = lo+ (hi-lo)/2;
            if(mid==0){
                if(nums[mid]!=nums[mid+1]) return nums[mid];
                else{
                    lo=mid+2;
                }}
            if(mid==nums.size()-1){
                    if(nums[mid]!=nums[mid-1]) return nums[mid];
                    else{
                        hi=mid-2;
                    }
                }

            else{

                if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                    return nums[mid];

                }

                else{
                    if(nums[mid]==nums[mid-1]){
                        int x = mid-lo;
                        if(x%2==0) hi=mid-2;
                        else lo=mid+1;
                    }

                    else{
                        int x = hi-mid;
                        if(x%2==0) lo=mid+2;
                        else hi=mid-1;
                    }
                }





            }
            }








        
        return -1;
    }
};