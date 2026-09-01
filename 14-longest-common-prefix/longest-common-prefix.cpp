class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n = strs.size();
        string st="";
        int j;
        if(strs.empty())
        {
            return st;
        }
        int min=strs[0].length();
        for(int i=0; i<n; i++)
        {
            if(strs[i].length()<min)
            {
                min = strs[i].length();
            }
        }
        for(int i=0; i<min; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(strs[j][i]!=strs[j+1][i])
                {
                    return st;
                }
            }
            st=st+strs[0][i];
        }
        return st;
    }
};