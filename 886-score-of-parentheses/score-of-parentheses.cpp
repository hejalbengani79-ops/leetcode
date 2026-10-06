class Solution {
public:
    int scoreOfParentheses(string s) 
    {
        int n = s.length();
        stack<string> st;
        int count = 0;
        int sum = 1;
        for(int i=0; i<n; )
        {
            if(s[i]=='(')
            {
                i++;
                st.push("(");
            }
            else if(s[i]==')')
            {
                if(st.top()=="(")
                {
                    st.pop();
                    if(st.empty() && i==(n-1))
                    {
                        return sum;
                    }
                    else if(st.empty() && i<(n-1))
                    {
                        st.push("1");
                    }
                    else if(st.top()!=")" && st.top()!="(")
                    {
                        int num = stoi(st.top())+1;
                        st.pop();
                        st.push(to_string(num));
                    }
                    else
                    {
                        st.push(to_string(1));
                    }
                    i++;
                }
                else
                {
                    int num = 0;
                    while(st.top()!="(")
                    {
                        num = num + stoi(st.top());
                        st.pop();
                    }
                    st.pop();
                    st.push(to_string(2*num));
                    i++;
                }
            }
        }
        while(!st.empty())
        {
            sum = sum + stoi(st.top());
            st.pop();
        }
        return sum-1;
    }
};