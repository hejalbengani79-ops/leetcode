class Solution {
public:
    int maxDepth(string s) 
    {
        stack<char> st;
        int count=0;
        int max=0;
        int n= s.length();
        for(int i=0; i<n ;i++)
        {
            if(s[i]=='(')
            {
                st.push('(');
                count++;
                if(count>max)
                {
                    max = count;
                }
            }
            if(s[i]==')')
            {
                st.pop();
                count--;
            }
        }
        return max;
    }
};