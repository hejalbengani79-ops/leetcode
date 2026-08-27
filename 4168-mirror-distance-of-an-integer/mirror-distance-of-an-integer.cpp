class Solution {
public:
    int mirrorDistance(int n) 
    {
        long long num = n;
        long long rev;
        long long digit;
        while (num != 0) 
        {
            digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }
        return abs(n-rev);
    }
};