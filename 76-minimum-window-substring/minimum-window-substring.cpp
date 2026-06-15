class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(256,0);
        int lft=0;
        int rgt=0;
        int count=0;
        int minlen=INT_MAX;
        int s_index=-1;
        for(char x: t){
            freq[x]++;
        }
        while(rgt<s.size()){
            if(freq[s[rgt]]>0){
                count++;
                
            }
            freq[s[rgt]]--;
            while(count==t.size()){
                if(minlen>rgt-lft+1){
                    minlen=rgt-lft+1;
                    s_index=lft;
                }
               freq[s[lft]]++;
               if(freq[s[lft]]>0) count--;
               lft++;

            }

            rgt++;
        }
        if(s_index==-1) return "";
        return s.substr(s_index,minlen);


    }
};