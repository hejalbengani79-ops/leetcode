class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        int n =  words.size();
        vector<int> vec;
        for(int i=0; i<n; i++)
        {
            int len = words[i].length();
            for(int j=0; j<len; j++)
            {
                if(words[i][j]==x)
                {
                    vec.push_back(i);
                    break;
                }
            }
        }
        return vec;
    }
};