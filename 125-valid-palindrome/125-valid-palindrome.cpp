class Solution {
public:
    bool isPalindrome(string s) {
          if (s.empty()) return true; 
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j])) return false;
            else {i++;
                  j--;
                 }
            
        }
        return true;
    }
};