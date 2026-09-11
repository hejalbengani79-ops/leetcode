class Solution {
public:
    int minPartitions(string n) 
    {
        int max=0;
        for(int i=0; i<n.length(); i++)
        {
            if((int)n[i]>max)
            {
                max = (int)n[i];
            }
        }
        return max-48;
    }
};