class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push('*');   // sentinel

        for (int i = 0; i < s.size(); ++i) {
            char x = st.top();

            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);

            else if (s[i] == ')' && x == '(')
                st.pop();

            else if (s[i] == '}' && x == '{')
                st.pop();

            else if (s[i] == ']' && x == '[')
                st.pop();

            else
                return false;   // invalid closing bracket
        }

        return st.top() == '*';
    }
};
