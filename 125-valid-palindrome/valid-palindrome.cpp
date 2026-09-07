class Solution {
public:
    
     bool notvalid(char ch) 
     {if(ch>=65 and ch<=90) return false;
     else if(ch>=97 and ch<=122) return false;
     else if(ch>=48 and ch<=57) return false;
     else return true;
     }
     bool isPalindrome(string s)
        {
        int n= s.size();
        int i=0,j=n-1;
        while(i<j)
        { 
            char x=s[i],y=s[j];
            if(x>=65&&x<=90) x+=32;
             if(y>=65&&y<=90) y+=32;
            if(notvalid(x)) i++;
        else if(notvalid(y))j--;
            else{
                if(x!=y)    
            return false;
                i++;
                j--;
            }
        }
        return true;
    }
};