class Solution {
public:
    bool isPalindrome(string s) 
    {
        string New = "";
        int n = s.length();
        for (char &c : s)
            c = tolower(c);
        for(int i=0; i<n; i++)
        {
            if((int)s[i]>=97 && (int)s[i]<=122)
            {
                New += s[i];
            }
            else if((int)s[i]>=48 && (int)s[i]<=57)
            {
                New += s[i];
            }
        }
        int m = New.length();
        for(int i=0; i<m; i++)
        {
            if(New[i]!=New[m-i-1])
            {
                return false;
            }
        }
        return true;
    }
};