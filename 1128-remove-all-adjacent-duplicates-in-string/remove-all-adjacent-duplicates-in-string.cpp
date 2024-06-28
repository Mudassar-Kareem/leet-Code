class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(auto& ch:s){
            if(!st.empty() && (ch == st.top() || st.top() == ch)){
                st.pop();
            }else{
                st.push(ch);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        };
        return ans;
    }
};