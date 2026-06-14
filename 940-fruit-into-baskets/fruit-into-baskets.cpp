class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      unordered_map<int,int>mp;
      int maxlen=0;
      int lft=0;
      int rgt=0;
      while(rgt<fruits.size()){       
            mp[fruits[rgt]]++;
            rgt++;
            while(mp.size()>2){
                mp[fruits[lft]]--;
                if(mp[fruits[lft]]==0) mp.erase(fruits[lft]);
                lft++;
            }
            maxlen=max(maxlen,rgt-lft);
        }

      
      return maxlen;
    }
};