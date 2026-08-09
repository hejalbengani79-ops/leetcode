class Solution {
public:
    string reverseByType(string s) 
    {
        int n = s.length();
        string letter;
        string chara;
        string rev = "";
        for(int i=0; i<n; i++)
        {
            if((int)s[i]>=97 && (int)s[i]<=122)
            {
                letter+=s[i];
            }
            else
            {
                chara+=s[i];
            }
        }
        int l=letter.length();
        int c=chara.length();
        for(int i=0; i<n; i++)
        {
            if((int)s[i]>=97 && (int)s[i]<=122)
            {
                rev+=letter[l-1];
                l--;
            }
            else
            {
                rev+=chara[c-1];
                c--;
            }
        }
        return rev;
    }
};