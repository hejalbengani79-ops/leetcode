class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int n = chars.size();
        string s="";
        char temp;
        int count = 0;
        char ch;
        if(n==1)
        {
            return 1;
        }
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                ch = chars[i];
                count++;
                temp = ch;
                continue;
            }
            if(chars[i]==ch)
            {
                count++;
                temp = ch;
            }
            else
            {
                s = s + temp;
                if(count>1)
                {
                    s = s + to_string(count);
                }
                count = 1;
                ch = chars[i];
                temp = ch;
            }
        }
        s = s + temp;
        if(count>1)
        {
            s = s + to_string(count);
        }
        for(int i=0; i<s.length(); i++)
        {
            chars[i]=s[i];
        }
        return s.length();
    }
};