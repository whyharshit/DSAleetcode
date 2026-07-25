class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int floor=-1;
        int ceil=-1;

        int lo=0;
        int hi=nums.size()-1;
        while(hi>=lo){
            int mid =lo+ (hi-lo)/2;

            if(nums[mid]==target){
                floor=mid;
                 hi=mid-1;
            }

            else if(nums[mid]>target){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }

            




        }
        lo=0;
        hi=nums.size()-1;


             while(hi>=lo){
            int mid =lo+ (hi-lo)/2;

            if(nums[mid]==target){
                 ceil=mid;
                 lo=mid+1;
            }

            else if(nums[mid]>target){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }

            




        }
        vector<int> ans;
        ans.push_back(floor);
        ans.push_back(ceil);
        return ans;
        
    }
};