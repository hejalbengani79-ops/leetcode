class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        int sum;
        int n= boxes.length();
        vector<int> vec(n);
        for(int i=0; i<n; i++)
        {
            sum =0;
            for(int j=0; j<n ;j++)
            {
                if((int)boxes[j]==49)
                {
                    sum = sum + abs((((int)boxes[j]-48)*j)-i);
                }
            }
            vec[i]=sum;
        }
        return vec;
    }
};