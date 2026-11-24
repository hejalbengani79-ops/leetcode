class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
        int n = plants.size();
        int c = capacity;
        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(c>=plants[i])
            {
                count++;
                c = c - plants[i];
            }
            else
            {
                c = capacity-plants[i];
                count = count + (i+i+1);
            }
        }
        return count;
    }
};