class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set;
        int rgt=0;
        int lft=0;
        int maxlen=0;
        while(rgt<s.size()){
            if(!set.count(s[rgt])) {
                
                set.insert(s[rgt]);
                maxlen = max(maxlen,rgt-lft+1);
                rgt++;
                
            }

            else{
                while(set.count(s[rgt]))
            {
                set.erase(s[lft]);
                lft++;
            }
                
                
            }

            

        }
      

        return maxlen;
    }
};