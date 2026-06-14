class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        vector<int> x(3,-1);

        for(int i=0;i<s.size();++i){
            x[s[i]-'a']=i;
            if(x[0]!=-1 && x[1]!=-1 && x[2]!=-1){
                count += 1+min(x[2],min(x[0],x[1]));
            }
        }

        return count;

       
    }
};