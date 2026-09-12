class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum1=0,sum2=0;
        for(int i=0;i<=n;i++)
        {
            if(i%m==0)
            {
                sum1=sum1+i;
            }
            else
            {
                sum2=sum2+i;
            }
        }
        int ans=(sum2-sum1);
        return ans;
    }
};