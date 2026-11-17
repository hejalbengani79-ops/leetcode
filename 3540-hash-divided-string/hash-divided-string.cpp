class Solution {
public:
    string stringHash(string s, int k) 
    {
        int n = s.length();
        int res = 0;
        string st="";
        for(int i=0; i<n; i++)
        {
            if(i%k==0 && i!=0)
            {
                st = st + string(1, (char)('a' + res%26));
                res = 0;
            }
            res = res + (int)s[i]-97;
        }
        st = st + string(1, (char)('a' + res%26));
        return st;
    }
};