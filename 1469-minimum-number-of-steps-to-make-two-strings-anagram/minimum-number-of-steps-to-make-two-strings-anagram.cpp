class Solution {
public:
    int minSteps(string s, string t) 
    {
        int hash1[27]={0};
        int hash2[27]={0};
        int n = s.length();
        int count = 0;
        for(int i=0; i<n; i++)
        {
            hash1[(int)(s[i])-97]++;
        }
        for(int i=0; i<n; i++)
        {
            hash2[(int)(t[i])-97]++;
        }
        for(int i=0; i<26; i++)
        {
            if(hash1[i]!=0 && hash2[i]!=0)
            {
                if(hash1[i]==hash2[i])
                {
                    count = count + hash1[i];
                }
                else
                {
                    count = count + min(hash1[i],hash2[i]);
                }
            }
        }
        return (n-count);
    }
};