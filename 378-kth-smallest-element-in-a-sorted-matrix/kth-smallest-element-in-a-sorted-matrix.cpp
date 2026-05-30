class Solution {
public:

    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n = matrix.size();

        priority_queue<
            vector<int>,
            vector<vector<int>>,
            greater<vector<int>>
        > pq;

        // insert first element of every row

        for(int i = 0; i < n; ++i) {

            pq.push({matrix[i][0], i, 0});
        }

        int ans;

        // remove smallest k times

        while(k--) {

            vector<int> temp = pq.top();
            pq.pop();

            int value = temp[0];
            int row   = temp[1];
            int col   = temp[2];

            ans = value;

            // insert next element of same row

            if(col + 1 < n) {

                pq.push({
                    matrix[row][col + 1],
                    row,
                    col + 1
                });
            }
        }

        return ans;
    }
};