class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int t1 = t.length();
        int s1 = s.length();
        int tcount=0;
        int scount=0;
        if(s1==0)
        {
            return true;
        }
        while(tcount<t1)
        {
            if(t[tcount]==s[scount])
            {
                tcount++;
                scount++;
            }
            else
            {
                tcount++;
            }
        }
        if(scount==s1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};