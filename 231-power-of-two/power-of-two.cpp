class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        int a=n;
        if(n<=0)
        {
            return false;
        }
        while(a!=1)
        {
            if(a%2!=0)
            {
                return false;
            }
            a=a/2;
        }
        return true;
    }
};