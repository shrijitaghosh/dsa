class Solution {
public:
    int differenceOfSum(vector<int>& arr) {
        int sum1=0,sum2=0;
        for(int i=0;i<arr.size();i++){
            sum1=sum1+arr[i];
            while(arr[i]!=0){
            sum2=sum2+(arr[i]%10);
            arr[i]=arr[i]/10;
            

            }
        }
        int ans=abs(sum1-sum2);
        return ans;
    }
};