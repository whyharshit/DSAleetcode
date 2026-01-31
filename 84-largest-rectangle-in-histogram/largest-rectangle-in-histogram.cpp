class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> pse(n), nse(n);

        // Find Previous Smaller Element (PSE)
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        // Clear stack for Next Smaller Element (NSE)
        while(!st.empty()) st.pop();

        // Find Next Smaller Element (NSE)
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            // Area = height * width
            // Width = (right_boundary - left_boundary - 1)
            int area = heights[i] * (nse[i] - pse[i] - 1);
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};