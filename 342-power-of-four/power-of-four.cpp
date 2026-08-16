class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n<=0)
        {
            return false;
        }
        int rem = n;
        while(rem!=1)
        {
            if(rem%4==0)
            {
                rem = rem/4;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};