class MyQueue {
public:
    stack<int>st;
    stack<int>helper;
    int w;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        int ans;
       if(st.size()==0) return -1;
       if(st.size()==1) {
        w=st.top();
        st.pop();
        return w;
       }
        else{
            while(st.size()!=1){
                w=st.top();
                st.pop();
                helper.push(w);
            }
            ans =st.top();
            st.pop();
             while(!helper.empty()){
                w=helper.top();
                st.push(w);
                helper.pop();
            }

            
        }
        return ans;
      }
    
    int peek() {
        int ans;
       if(st.size()==0) return -1;
       if(st.size()==1) {
        w=st.top();
       
        return w;
       }
        else{
            while(st.size()!=1){
                w=st.top();
                st.pop();
                helper.push(w);
            }
            ans=st.top();
             while(!helper.empty()){
                w=helper.top();
                helper.pop();
                st.push(w);
            }

            
        }
        return ans;
        
    }
    
    bool empty() {
        if(st.empty()) return true;
        return false;
    }

};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */