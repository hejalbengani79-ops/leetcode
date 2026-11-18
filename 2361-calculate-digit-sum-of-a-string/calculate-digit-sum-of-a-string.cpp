class Solution {
public:
    string digitSum(string s, int k) 
    {
        int n = s.length();
        string st = s;
        int temp=0;
        string t="";
        while(st.length()>k)
        {
            for(int i=0; i<st.length(); i++)
            {
                if(i%k==0 && i!=0)
                {
                    t = t + to_string(temp);
                    temp = 0;
                }
                temp = temp + (int)(st[i]-'0');
            }
            t = t + to_string(temp);
            temp = 0;
            st = t;
            t="";
        }
        return st; 
    }
};