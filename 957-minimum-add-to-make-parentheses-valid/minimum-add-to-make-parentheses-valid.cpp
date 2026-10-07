class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        stack<char> st;
        int count=0;
        int n = s.length();
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
            {
                st.push('(');
            }
            else if(s[i]==')')
            {
                if(st.empty())
                {
                    count++;
                }
                else
                {
                    st.pop();
                }
            }
        }
        while(!st.empty())
        {
            count++;
            st.pop();
        }
        return count;
    }
};