class Solution {
public:
    void helper(vector<int>& digits,vector<int>& comb){
        
        for(int i=0;i<digits.size();++i){
            if(digits[i]==0) continue;
            for(int j=0;j<digits.size();++j){
                if(i==j) continue;
                for(int k=0;k<digits.size();++k){
                    if(j==k || i==k) continue;
                    if(digits[k]%2==0) comb.push_back(100*digits[i]+10*digits[j]+digits[k]);
                }
            }
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> comb;
        helper(digits,comb);
        set<int> ans;
        for(int ele: comb){
            ans.insert(ele);
        }
        vector<int>finalans(ans.begin(),ans.end());
        
        return finalans;
    }
};