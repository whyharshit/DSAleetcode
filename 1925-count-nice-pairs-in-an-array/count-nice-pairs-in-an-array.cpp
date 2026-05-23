class Solution {
public:

    int reverseNum(int num){

        int r = 0;

        while(num > 0){

            int digit = num % 10;

            r = r * 10 + digit;

            num /= 10;
        }

        return r;
    }

    int countNicePairs(vector<int>& nums) {

        unordered_map<int,int> mp;

        long long ans = 0;

        int MOD = 1e9 + 7;

        for(int num : nums){

            int val = num - reverseNum(num);

            // add previous same values
            ans = (ans + mp[val]) % MOD;

            mp[val]++;
        }

        return ans;
    }
};