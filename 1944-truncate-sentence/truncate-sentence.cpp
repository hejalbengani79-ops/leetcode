class Solution {
public:
    string truncateSentence(string s, int k) 
    {
        int n = s.length();
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==' ')
            {
                count++;
            }
            if(count==k)
            {
                for(int j=i; j<s.length(); j++)
                {
                    s.erase(j);
                }
            }
        }
        return s;
    }
};