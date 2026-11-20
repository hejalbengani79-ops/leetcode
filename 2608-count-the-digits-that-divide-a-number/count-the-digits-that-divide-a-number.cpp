class Solution {
public:
    int countDigits(int num) 
    {
        string s = to_string(num);
        int n = s.length();
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(num%((int)s[i]-'0')==0)
            {
                count++;
            }
        }
        return count;
    }
};