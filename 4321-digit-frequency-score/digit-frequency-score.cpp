class Solution {
public:
    int digitFrequencyScore(int n) 
    {
        int hash[10]={0};
        int rem = n;
        int digit;
        int count=0;
        while(rem!=0)
        {
            digit = rem%10;
            hash[digit]++;
            rem = rem/10;
        }
        for(int i=0; i<10; i++)
        {
            count = count + (i*hash[i]);
        }
        return count;
    }
};