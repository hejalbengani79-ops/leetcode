class Solution {
public:
    int hammingWeight(int n) 
    {
        long long rem = n;
        int count = 0;

        while(rem != 0)
        {
            if(rem >= pow(2,30))
            {
                rem = rem - pow(2,30);
                count++;
            }

            if(rem >= pow(2,29))
            {
                rem = rem - pow(2,29);
                count++;
            }

            if(rem >= pow(2,28))
            {
                rem = rem - pow(2,28);
                count++;
            }

            if(rem >= pow(2,27))
            {
                rem = rem - pow(2,27);
                count++;
            }

            if(rem >= pow(2,26))
            {
                rem = rem - pow(2,26);
                count++;
            }

            if(rem >= pow(2,25))
            {
                rem = rem - pow(2,25);
                count++;
            }

            if(rem >= pow(2,24))
            {
                rem = rem - pow(2,24);
                count++;
            }

            if(rem >= pow(2,23))
            {
                rem = rem - pow(2,23);
                count++;
            }

            if(rem >= pow(2,22))
            {
                rem = rem - pow(2,22);
                count++;
            }

            if(rem >= pow(2,21))
            {
                rem = rem - pow(2,21);
                count++;
            }

            if(rem >= pow(2,20))
            {
                rem = rem - pow(2,20);
                count++;
            }

            if(rem >= pow(2,19))
            {
                rem = rem - pow(2,19);
                count++;
            }

            if(rem >= pow(2,18))
            {
                rem = rem - pow(2,18);
                count++;
            }

            if(rem >= pow(2,17))
            {
                rem = rem - pow(2,17);
                count++;
            }

            if(rem >= pow(2,16))
            {
                rem = rem - pow(2,16);
                count++;
            }

            if(rem >= pow(2,15))
            {
                rem = rem - pow(2,15);
                count++;
            }

            if(rem >= pow(2,14))
            {
                rem = rem - pow(2,14);
                count++;
            }

            if(rem >= pow(2,13))
            {
                rem = rem - pow(2,13);
                count++;
            }

            if(rem >= pow(2,12))
            {
                rem = rem - pow(2,12);
                count++;
            }

            if(rem >= pow(2,11))
            {
                rem = rem - pow(2,11);
                count++;
            }

            if(rem >= pow(2,10))
            {
                rem = rem - pow(2,10);
                count++;
            }

            if(rem >= pow(2,9))
            {
                rem = rem - pow(2,9);
                count++;
            }

            if(rem >= pow(2,8))
            {
                rem = rem - pow(2,8);
                count++;
            }

            if(rem >= pow(2,7))
            {
                rem = rem - pow(2,7);
                count++;
            }

            if(rem >= pow(2,6))
            {
                rem = rem - pow(2,6);
                count++;
            }

            if(rem >= pow(2,5))
            {
                rem = rem - pow(2,5);
                count++;
            }

            if(rem >= pow(2,4))
            {
                rem = rem - pow(2,4);
                count++;
            }

            if(rem >= pow(2,3))
            {
                rem = rem - pow(2,3);
                count++;
            }

            if(rem >= pow(2,2))
            {
                rem = rem - pow(2,2);
                count++;
            }

            if(rem >= pow(2,1))
            {
                rem = rem - pow(2,1);
                count++;
            }

            if(rem >= pow(2,0))
            {
                rem = rem - pow(2,0);
                count++;
            }
        }

        return count;
    
    }
};