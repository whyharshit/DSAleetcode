class Solution {
public:
    string removeStars(string s) {
        string w="";
        for(auto x: s){
           if(x!='*') w.push_back(x);
           else{
            w.pop_back();
           }

        }
        return w;

    }
};