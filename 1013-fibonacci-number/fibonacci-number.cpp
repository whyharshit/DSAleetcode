class Solution {
public:
    int f(int n,vector<int>&dp){
        if(n==0 || n==1) return n;
        if(dp[n]!=-1){
            return dp[n];
        }
        else {
            dp[n]= f(n-1,dp)+f(n-2,dp);
             return dp[n];
        }
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        int x =f(n,dp);
        return x;
    }
};