class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size();//i
        int m = nums2.size();//j
        vector<int>New(m+n);
        int i=0, j=0;
        for(int k=0; k<m+n; k++)
        {
            if(i==n)
            {
                New[k]=nums2[j];
                j++;
            }
            else if(j==m)
            {
                New[k]=nums1[i];
                i++;
            }
            else if(nums1[i]<=nums2[j])
            {
                New[k]=nums1[i];
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                New[k]=nums2[j];
                j++;
            }
        }
        double avg=0;
        if((m+n)%2!=0)
        {
            avg= (double)New[((m+n+1)/2)-1];
        }
        else
        {
            avg = (double)(New[((m+n+1)/2)-1]+New[((m+n+1)/2)])/2;
        }
        return avg;
    }
};