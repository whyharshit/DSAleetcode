class Solution {
public:
    int reversenum(int n){
        int r=0;
       
        while(n>0){
              int x=n%10;
              r *=10;
              r +=x;
              n =n/10;
                   
        }  
        return r;

    }
    int countDistinctIntegers(vector<int>& nums) {
        int n =nums.size();
        for (int i =0; i<n;++i) {
            int rev = reversenum(nums[i]);
            nums.push_back(rev);
        }
        unordered_set<int> set1;
        for(int ele: nums){
            set1.insert(ele);
        }

        return set1.size();
    }
};