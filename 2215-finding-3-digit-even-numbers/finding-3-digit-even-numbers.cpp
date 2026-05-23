class Solution {
public:
    
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int ele: digits){
            mp[ele]++;
        }

        for(int i=100;i<1000;i+=2){
             int n = i;
             int a = n%10;
             n=n/10;
             int b = n%10;
             n=n/10;
             int c =n%10;
             if(mp.find(a)!=mp.end()) {
                mp[a]--;
                if(mp[a]==0) mp.erase(a);
                if(mp.find(b)!=mp.end()){
                    mp[b]--;
                    if(mp[b]==0)mp.erase(b);
                    if(mp.find(c)!=mp.end()) ans.push_back(i);
                    mp[b]++;
                }
                    mp[a]++;
             }
            
        }
         return ans;
    }};