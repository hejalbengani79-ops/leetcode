class Solution {
public:
    int balancedStringSplit(string s) 
    {
        int n = s.length();
        int a=0;
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='L')
            {
                count++;
            }
            else if(s[i]=='R')
            {
                count--;
            }
            if(count==0)
            {
                a++;
            }
        }
        return a;
    }
};