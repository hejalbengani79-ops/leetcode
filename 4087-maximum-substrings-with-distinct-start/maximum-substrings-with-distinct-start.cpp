class Solution {
public:
    int maxDistinct(string s) 
    {
        int n=s.length();
        int hash[125]={0};
        for(int i=0; i<n ;i++)
        {
            hash[(int)s[i]]++;
        }
        int count=0;
        for(int i=97; i<123; i++)
        {
            if(hash[i]>0)
            {
                count++;
            }
        }
        return count;
    }
};