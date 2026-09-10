class Solution {
public:
    long long countCommas(long long n) 
    {
        long long count1 = 999000;
        long long count2 = 1998000000;
        long long count3 = 2997000000000;
        long long count4 = 3996000000000000;
        long long count=0;
        if(n<1000)
        {
            return 0;
        }
        if(n==1000000000000000)
        {
            return (count4+count3+count2+count1+count+5);
        }
        if(n>=1000000000000)
        {
           long long a = (n+1-1000000000000)*4;
           return (a+count1+count2+count3+count);
        }
        if(n>=1000000000)
        {
            long long a = (n+1-1000000000)*3;
            return (a+count1+count2+count);
        }
        if(n>=1000000)
        {
            long long a = (n+1-1000000)*2;
            return (a+count1+count);
        }
        if(n>=1000)
        {
            long long a = (n+1-1000)*1;
            return (a+count);
        }
        return 0;
    }
};