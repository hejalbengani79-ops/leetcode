class Solution {
public:
    bool isPalindrome(int x) 
    {
        long long digit=x,rem=x;
        long long New=0;
        if(x<0)
        {
            return false;
        }
        else
        {
            while(rem!=0)
            {
                digit = rem % 10;
                rem = (int)(rem/10);
                New = New*10 + digit;
            }
            if(New == x)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};