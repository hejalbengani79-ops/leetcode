class Solution {
public:
    int minInsertions(string s) 
    {
        int n = s.length();
        stack<char> st;
        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
            {
                st.push('(');
            }
            else
            {
                if(st.empty())
                {
                    if(i<n-1 && s[i+1]==')')
                    {
                        count = count + 1;
                        i++;
                    }
                    else
                    {
                        count = count + 2;
                    }
                }
                else
                {
                    if(i<n-1 && s[i+1]==')')
                    {
                        i++;
                    }
                    else
                    {
                        count++;
                    }
                    st.pop();
                }
            }
        }
        while(!st.empty())
        {
            st.pop();
            count+=2;
        }
        return count;
    }
};