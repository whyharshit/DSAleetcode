class Solution {
public:
    bool palindrome(string s){
       string w =s;
       reverse(w.begin(),w.end());
       if(w==s) return true ;
       else return false;
    }
    int maximumNumberOfStringPairs(vector<string>& s) {
        unordered_set<string> st;
        int ans=0;
        for(string ele: s){
            if(!palindrome(ele))st.insert(ele);
        }
        for(string ele: s){
            reverse(ele.begin(),ele.end());
            if(st.find(ele)!=st.end()  ) ans++;
        }
        



        
        return ans/2;
    }
};