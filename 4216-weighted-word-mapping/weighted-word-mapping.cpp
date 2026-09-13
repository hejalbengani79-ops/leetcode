class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) 
    {
        int n=words.size();
        string s="";
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum=0;
            for(int j=0; j<words[i].length(); j++)
            {
                sum = sum + weights[((int)words[i][j])-97];
            }
            s = s + (char)((sum%26)+97);
        }
        for(int i=0; i<n; i++)
        {
            if((int)s[i]<110)
            {
                int k = (int)s[i]-96;
                k = 123-k;
                s[i] = (char)k;
            }
            else
            {
                int k = 122-(int)s[i];
                k = 97+k;
                s[i] = (char)k;
            }
        }
        return s;
    }
};