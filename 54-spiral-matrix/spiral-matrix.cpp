class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
         vector<int>res;
         int m=arr.size();
         int n= arr[0].size();
         int minr=0,maxr=m-1;
         int minc=0,maxc=n-1;
         while(minr<=maxr && minc<=maxc)
         {
            for(int j=minc;j<=maxc;j++)
            {
                res.push_back(arr[minr][j]);    
            }
             minr++;
             if(minr>maxr||minc>maxc)
             break;
            for(int j=minr;j<=maxr;j++){
                 res.push_back(arr[j][maxc]);
               
            }
              maxc--;
              if(minr>maxr||minc>maxc)
             break;
            for(int j=maxc;j>=minc;j--){
                 res.push_back(arr[maxr][j]);
                 
            }
            maxr--;
            if(minr>maxr||minc>maxc)
             break;
             for(int j=maxr;j>=minr;j--){
                 res.push_back(arr[j][minc]);
                
            }
            minc++;
            if(minr>maxr||minc>maxc)
             break;
         }
         return res;
    }
};