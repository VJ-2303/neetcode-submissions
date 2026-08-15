class Solution {
public:

    int string_to_int(const string& str) {
        int val = 0;
        auto [ptr, ec] = from_chars(str.data(), str.data() + str.size(), val);

        if (ec != errc()) {
        }
        return val;
    }

    int calPoints(vector<string>& operations) {

        stack<int> st;

        int sum = 0;

        for(string s : operations) {
            if(s == "+") {
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.push(num1);
                st.push(num1 + num2);
                sum += st.top();
            } else if(s == "D") {
                st.push(2 * st.top());
                sum += st.top();
            } else if(s == "C") {
                sum -= st.top();
                st.pop();
            } else {
                st.push(string_to_int(s));
                sum += st.top();
            }
        }
        return sum;
    }
};
