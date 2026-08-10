class Solution {
public:
    int mySqrt(int x) 
    {
        int n=0;
        for(long long  i=0; i<=x; i++)
        {
            if((i*i)<x)
            {
                n=i;
            }
            else if((i*i)==x)
            {
                n=i;
                break;
            }
            else if((i*i)>x)
            {
                break;
            }
        }
        return n;
    }
};