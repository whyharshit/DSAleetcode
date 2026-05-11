class Solution {
public:
    string predictPartyVictory(string s) {
        int live_R=0;
        int live_D=0;
        int ban_R=0;
        int ban_D=0;
        queue <char> q;
        for(int i =0;i<s.size();++i){
            if(s[i]=='R') live_R++;
            else live_D++;
            q.push(s[i]);
            
        }
        while(live_R!=0 && live_D!=0){
            char w =q.front();

             if(q.front()=='R' && ban_R==0 || q.front()=='D'&& ban_D==0){
                char temp = q.front();
                q.pop();
                q.push(temp);

                if(w=='R'){
                ban_D++;
                live_D--;

            }
            else{
                ban_R++;
                live_R--;
            }
            }
            else {
                
                if(q.front()=='D') ban_D--;
                else ban_R--;
                q.pop();
            }

           

           



        }

        if(live_R>0)return "Radiant";
        else return "Dire";

    }
};