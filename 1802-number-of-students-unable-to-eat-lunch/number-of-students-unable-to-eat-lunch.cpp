class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue <int> q;
        stack<int> st;
        int x;

        for(int i=0;i<students.size();++i){
            q.push(students[i]);
        }
        for(int i=0;i<sandwiches.size();++i){
            st.push(sandwiches[i]);
        }
        stack<int>helper;
        while(!st.empty()){
            int x = st.top();
            st.pop();
            helper.push(x);

        }
        
        int rem=0;
     
        while(!q.empty()){
            if(helper.top()==q.front()){
                rem=0;
                helper.pop();
                q.pop();
               
            }
            else{
                x=q.front();
                q.pop();
                rem++;
                q.push(x);
                

            }
            if(helper.size()==rem) break;

            

        }
        return helper.size();


    }
};