class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
    
    vector<int>arr;
    for(int i=left;i<=right;i++){
         
        int n=i;
         bool isSelfDividing = true;
        while(n!=0)
        {
         int digit=n%10;
            if(digit==0 or i % digit!=0) 
            {
                  isSelfDividing = false;
                    break; 
            }
                 n=n/10;
                    
    }
      if (isSelfDividing) {
                arr.push_back(i);

     }
    

    }
    return arr;
    

    }

    
};   
