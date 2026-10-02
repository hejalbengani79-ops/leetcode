class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        stack<char> st;
        int i=0;
        s.erase(0, 1);
        while(i<s.length())
        {
            if(s[i]=='(')
            {
                st.push('(');
                i++;
            }
            else if(s[i]==')' && st.empty() && i<s.length()-1)
            {
                s.erase(i,1);
                s.erase(i,1);
            }
            else if(s[i]==')' && st.empty() && i==s.length()-1)
            {
                s.erase(i,1);
                return s;
            }
            else if(s[i]==')' && st.top()=='(')
            {
                st.pop();
                i++;
            }
        }
        s.erase(i,1);
        return s;
    }
};