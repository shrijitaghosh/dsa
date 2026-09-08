class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.length();
        int m=t.length();
        int i=0,j=0;
        if(m!=n)
        return false;
        while(i<n&&j<m)
        {
            if(s[i]!=t[j])

            return false;
            i++;
            j++;
        }
        return true;
    }
};