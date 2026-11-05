class Solution {
public:
    int reverse(int x) 
    {
        int flag = 0;
        if(x<0)
        {
            flag = 1;
        }
        string s = to_string(x);
        string ne="";
        int n = s.length();
        for(int i=n-1; i>=0; i--)
        {
            ne = ne + s[i];
        }
        long long rev = stoll(ne);
        if(flag == 1)
        {
            rev = (0-rev);
        }
        if(rev > 2147483647 || rev < -2147483648)
        {
            return 0;
        }
        return rev;
    }
};