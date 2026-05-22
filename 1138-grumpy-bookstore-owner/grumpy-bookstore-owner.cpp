class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
       int alreadysatisfied=0;
       for(int i=0;i<customers.size();++i){
        if(grumpy[i]==0) alreadysatisfied +=customers[i];
       }
       int extra =0;
       
       for(int i=0 ;i<minutes;++i){
        if(grumpy[i]==1) extra +=customers[i];

       }
       int mx =extra;
       for(int i=minutes;i<customers.size();++i){
         if(grumpy[i-minutes]==1) extra -=customers[i-minutes];
          if(grumpy[i]==1) extra +=customers[i];
          mx = max(mx,extra);
       }
        return alreadysatisfied + mx ;
    }
};