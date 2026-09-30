class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        stack<int> st;
        stack<int> st1;
        string s,s1;
        int rem = start;
        int digit;
        if(start == 0)
            st.push(0);
        else
        {
            while(rem!=1)
            {
                digit = rem % 2;
                st.push(digit);
                rem = rem / 2;
            }
            st.push(1);
        }
        while(!st.empty())
        {
            s = s + to_string(st.top());
            st.pop();
        }

        rem = goal;
        if(goal == 0)
        {
            st1.push(0);
        }
        else
        {
            while(rem!=1)
            {
                digit = rem % 2;
                st1.push(digit);
                rem = rem / 2;
            }
            st1.push(1);
        }
        
        while(!st1.empty())
        {
            s1 = s1 + to_string(st1.top());
            st1.pop();
        }

        int count=0;
        int n = s.length();
        int m = s1.length();

        int maxi;
        if(n>m)
        {
            maxi = n-m;
            for(int i=0; i<maxi; i++)
            {
                s1 = '0' + s1;
            }
            maxi = n;
        }
        else if(m>n)
        {
            maxi = m-n;
            for(int i=0; i<maxi; i++)
            {
                s = '0' + s;
            }
            maxi = m;
        }
        else
        {
            maxi = m;
        }

        for(int i=0; i<maxi; i++)
        {
            if(s[i]!=s1[i])
            {
                count++;
            }
        }
        return count;
    }
};