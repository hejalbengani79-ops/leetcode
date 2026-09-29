class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) 
    {
        int n = A.size();
        vector<int> vec(n);
        int count=0;
        int hash[51]={0};

        for(int i=0; i<n; i++)
        {
            count=0;
            hash[A[i]]++;
            hash[B[i]]++;
            for(int j=0; j<n; j++)
            {
                if(hash[j+1]==2)
                {
                    count++;
                }
            }
            vec[i]=count;
        }
        return vec;
    }
};