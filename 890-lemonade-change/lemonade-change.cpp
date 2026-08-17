class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int change5=0;
        int change10=0;
        int n =bills.size();
        for(int i=0; i<n; i++)
        {
            if(bills[i]==5)
            {
                change5 = change5 +5;
            }
            if(bills[i]==10)
            {
                if(change5==0)
                {
                    return false;                
                }
                change10 = change10 +10;
                change5 = change5 - 5;
            }
            if(bills[i]==20)
            {
                if(change10 > 0 && change5 > 0)
                {
                    change10 = change10 - 10;
                    change5 = change5 - 5;
                }
                else if(change5 >= 15)
                {
                    change5 = change5 - 15;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};