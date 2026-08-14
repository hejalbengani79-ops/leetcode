class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) 
    {
        int time = 0;
        int n = colors.length();

        for(int i = 0; i < n - 1; i++)
        {
            if(colors[i] == colors[i + 1])
            {
                int j = i + 1;
                int max = neededTime[i];

                time = time + neededTime[i];

                while(j < n && colors[i] == colors[j])
                {
                    if(neededTime[j] > max)
                    {
                        max = neededTime[j];
                    }

                    time = time + neededTime[j];

                    j++;
                    i++;
                }

                time = time - max;
            }
        }

        return time;

    }
};