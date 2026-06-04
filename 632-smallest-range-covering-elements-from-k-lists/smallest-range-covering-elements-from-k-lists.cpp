class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {

        priority_queue<
            vector<int>,
            vector<vector<int>>,
            greater<vector<int>>
        > pd;

        int mx = INT_MIN;

        for(int i=0;i<nums.size();i++) {

            pd.push({nums[i][0],i,0});

            mx = max(mx, nums[i][0]);
        }

        int start = 0;
        int end = INT_MAX;
        int rng = INT_MAX;

        while(true) {

            vector<int> temp = pd.top();
            pd.pop();

            int val = temp[0];
            int row = temp[1];
            int col = temp[2];

            if((mx-val) < rng ||
               ((mx-val) == rng && val < start)) {

                rng = mx-val;
                start = val;
                end = mx;
            }

            if(col + 1 < nums[row].size()) {

                pd.push({nums[row][col+1],row,col+1});

                mx = max(mx, nums[row][col+1]);
            }
            else {

                break;
            }
        }

        return {start,end};
    }
};