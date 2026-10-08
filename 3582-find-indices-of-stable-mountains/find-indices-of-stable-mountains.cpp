class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) 
    {
        vector<int> vec;
        int n = height.size();
        for(int i=1; i<n; i++)
        {
            if(height[i-1]>threshold && height[i]!=0)
            {
                vec.push_back(i);
            }
        }
        return vec;
    }
};