class Solution {
public:
    vector<int> findWordsContaining(vector<string>& arr, char x) {
        int n= arr.size();
        vector<int>ans;
        char ch;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<arr[i].size();j++)
            {
                ch=arr[i][j];
                if(ch==x)
                {  int idx=i;
                  ans.push_back(idx);
                  break;
                }
            }

        }
        return ans;
    }
};