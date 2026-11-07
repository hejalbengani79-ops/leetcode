class Solution {
public:
    string decodeString(string s) 
    {
        int n = s.length();
        string res="";
        string temp="";
        string r="";
        string num="";
        stack<string> st;
        for(int i=0; i<n; i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                st.push(string(1, s[i]));
            }
            else if(s[i]=='[')
            {
                st.push(string(1, s[i]));
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                st.push(string(1, s[i]));
            }
            else if(s[i]==']')
            {
                temp = "";
                r = "";
                num = "";
                while(st.top()!="[")
                {
                    temp = temp + st.top();
                    st.pop();
                }
                //reverse(temp.begin(),temp.end());
                st.pop();
                while(!st.empty() && (st.top()>="0" && st.top()<="9"))
                {
                    num = num + st.top();
                    st.pop();
                }
                reverse(num.begin(),num.end());
                for(int j=0; j<stoi(num); j++)
                {
                    r = r + temp;
                }
                st.push(r);
            }
        }
        while(!st.empty())
        {
            res = res + st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};