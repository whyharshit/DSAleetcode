class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfreq=0;
        int maxlen=0;
        int lft=0;
        int rgt=0;
        int flips;
        vector<int>v(26,0);
        while(rgt<s.size()){
            v[s[rgt]-'A']++;
            maxfreq=max(maxfreq,v[s[rgt]-'A']);
            flips = rgt-lft+1- maxfreq;
            if(flips>k){
                v[s[lft]-'A']--;
                lft++;
            }
            if(k>=flips) maxlen=(maxlen,rgt-lft+1);
            rgt++;
        }
        return maxlen;
    }
};