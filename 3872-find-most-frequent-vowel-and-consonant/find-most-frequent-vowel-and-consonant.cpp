class Solution {
public:
    int maxFreqSum(string s) 
    {
        int n=s.length();
        int hash[126]={0};
        for(int i=0; i<n; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                hash[(int)s[i]]++;
            }
            else
            {
                hash[(int)s[i]]++;
            }
        }
        int maxv=0;
        int maxc=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                if(hash[(int)s[i]] > maxv)
                {
                    maxv = hash[s[i]];
                }
            }
            else
            {
                if(hash[(int)s[i]]>maxc)
                {
                    maxc = hash[s[i]];
                }
            }
        }
        return (maxv+maxc);
    }
};