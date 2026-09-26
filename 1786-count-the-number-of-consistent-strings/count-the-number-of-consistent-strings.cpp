class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int n = words.size();
        int count=n;
        int hash[126]={0};
        int m;
        for(int i=0; i<allowed.length(); i++)
        {
            hash[(int)allowed[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            m = words[i].length();
            for(int j=0; j<m; j++)
            {
                if(hash[(int)words[i][j]]==0)
                {
                    count--;
                    break; 
                }
            }
        }
        return count;
    }
};