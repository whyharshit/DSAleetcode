class MinStack {
public:
    stack<long long> st;
    long long minVal;

    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            minVal = val;
        }
        else if (val >= minVal) {
            st.push(val);
        }
        else {
            long long encoded = 2LL * val - minVal;
            st.push(encoded);
            minVal = val;
        }
    }

    void pop() {
        if (st.top() < minVal) {
            long long encoded = st.top();
            st.pop();
            minVal = 2 * minVal - encoded;
        }
        else {
            st.pop();
        }
    }

    int top() {
        if (st.top() >= minVal)
            return st.top();
        else
            return minVal;
    }

    int getMin() {
        return minVal;
    }
};
