class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       if(nums.size()==1) return nums;
       int n= nums.size();
        
       stack<int>st;
       vector<int>nge(nums.size());
       nge[nums.size()-1]=nums.size();
       st.push(nums.size()-1);
       for(int i=nums.size()-2;i>=0;--i){
       while(!st.empty() && nums[st.top()]<=nums[i]){
        st.pop();
       }
       if(!st.empty()) nge[i]=st.top();
       else nge[i]=nums.size();
       st.push(i);
       }
       int j=0;
       int mn=INT_MIN;
       vector<int>ans;
       for(int i =0;i<n-k+1;++i){
        mn = nums[i];
        if(j<i) j=i;
        while(j<i+k){
             mn = nums[j];
             if(nge[j]>=i+k) break;
             j=nge[j];

        }
        ans.push_back(mn);
       }
       return ans;











    }
};