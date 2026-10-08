class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        string s = to_string(n);
        int no = s.length();
        int pro = 1;
        int sum = 0;
        for(int i=0; i<no; i++)
        {
            sum = sum + (int)(s[i]-48);
        }
        for(int i =0; i<no; i++)
        {
            pro = pro * (int)(s[i]-48);
        }
        return pro-sum;
    }
};