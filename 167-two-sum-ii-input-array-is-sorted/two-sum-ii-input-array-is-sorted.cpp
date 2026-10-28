class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int j,i;
        int n = numbers.size();
        j=n-1;
        i=0;
        vector<int> vec;
        while(i<j)
        {
            if(numbers[i]+numbers[j]==target)
            {
                vec.push_back(i+1);
                vec.push_back(j+1);
                return vec;
            }
            else if(numbers[i]+numbers[j]>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return vec;
    }
};