class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(char c:s)
        {
            if((c==')' && st.empty()) || (c=='}' && st.empty()) || (c==']' && st.empty()))
            {
                return false;
            }
            else if((c==')' && st.top()=='(') || (c==']' && st.top()=='[') || (c=='}' && st.top()=='{'))
            {
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        if(st.empty())return true;
        return false;
    }
};