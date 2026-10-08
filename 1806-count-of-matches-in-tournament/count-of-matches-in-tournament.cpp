class Solution {
public:
    int numberOfMatches(int n) 
    {
        long long adv = 0;
        long long match = 0;
        long long teams = n;
        while(adv!=1)
        {
            if(teams%2==0)
            {
                match = match + (teams/2);
                adv = teams/2;
            }
            else
            {
                match = match + ((teams-1)/2);
                adv = (((teams-1)/2)+1);
            }
            teams = adv;
        }
        return match;
    }
};