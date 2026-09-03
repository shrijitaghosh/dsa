class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      set<int> s;
      vector<int> ans;
      for(int i=0;i<nums1.size();i++)
      s.insert(nums1[i]);  
       for(int i=0;i<nums2.size();i++)
       {
        if(s.count(nums2[i]))
        {
            ans.push_back(nums2[i]);
            s.erase(nums2[i]);
        }
       }
       return ans;
    }
};