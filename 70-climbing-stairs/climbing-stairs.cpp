class Solution {
public:
    int climbStairs(int n) 
    {
        int i=1,j=2;
        int temp;
        int tempOfCount=3;
        
        if(n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 2;
        }
        if(n==3)
        {
            return 3;
        }
        while(tempOfCount-1!=n)
        {
            tempOfCount++;
            temp = i+j;
            i = j;
            j = temp;
        }
        return temp;
    }
};