class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
         stack <int>st;
         vector<int>nse(heights.size());
         nse[heights.size()-1]=0;
         st.push(heights[heights.size()-1]);
         
         for (int i=heights.size()-2;i>=0;--i){
            int count=0;
            while(!st.empty()&& st.top()<=heights[i]){
                st.pop();
                count++;
            }

            if(!st.empty()){
                count++;
                nse[i]=count;
            }
            else nse[i]=count;
            st.push(heights[i]);
         }

         return nse;
         }
    
};