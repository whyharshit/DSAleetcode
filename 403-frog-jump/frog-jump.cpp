class Solution {
public:

    bool helper(int idx, int jumps,
                unordered_map<int,int>& pos,
                vector<int>& stones,
                vector<vector<int>>& dp)
    {
        if(idx==stones.size()-1)
            return true;

        if(dp[idx][jumps]!=-1)
            return dp[idx][jumps];

        for(int jump=jumps-1;jump<=jumps+1;jump++)
        {
            if(jump<=0)
                continue;

            int nextPos=stones[idx]+jump;

            if(pos.count(nextPos))
            {
                if(helper(pos[nextPos],jump,pos,stones,dp))
                    return dp[idx][jumps]=true;
            }
        }

        return dp[idx][jumps]=false;
    }

    bool canCross(vector<int>& stones) {

        if(stones[1]!=1)
            return false;

        unordered_map<int,int> pos;

        for(int i=0;i<stones.size();i++)
            pos[stones[i]]=i;

        int n=stones.size();

        vector<vector<int>> dp(n,vector<int>(n+1,-1));

        return helper(1,1,pos,stones,dp);
    }
};