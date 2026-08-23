class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {
        int i=0;
        int count=0;
        while(true)
        {
            if(k!=i)
            {
                if(tickets[i]>1)
                {
                    int var = tickets[i];
                    tickets.erase(tickets.begin());
                    tickets.push_back(var-1);
                    k--;
                    count++;
                }
                else
                {
                    tickets.erase(tickets.begin());
                    k--;
                    count++;
                }
            }
            else
            {
                if(tickets[i]>1)
                {
                    int var = tickets[i];
                    tickets.erase(tickets.begin());
                    tickets.push_back(var-1);
                    k=tickets.size()-1;
                    count++;
                }
                else
                {
                    tickets.erase(tickets.begin());
                    count++;
                    return count;
                }
            }
        }
        return 100;   
    }
};
