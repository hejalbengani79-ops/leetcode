class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        int k=0;
        int j=0;
        int h=0;
        vector<int> vec1(2*n);
        vector<int> vec2(2*n);
        for(int i=0; i<(2*n); i++)
        {
            if(i%2==0)
            {
                vec1[k] = nums[h];
                k++;
                h++;
            }
            else
            {
                vec1[k]=nums[n+j];
                j++;
                k++;
            } 
        }
        return vec1;
    }
};