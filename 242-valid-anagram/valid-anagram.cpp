class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mp;
        for (char ele : s){
            mp[ele]++;
        }

        for(char ele : t){

            
            if(mp.find(ele)!=mp.end()) {
          
                mp[ele]--;
                if(mp[ele]==0) mp.erase(ele);
            }
            
        }

        if(mp.size()==0) return true ;
        else return false;
        
        
    }
};