class Solution {
public:
    int firstUniqChar(string s) {
         unordered_map<char,int>ans;
        for(auto& i :s){
           ans[i]++;
        }
            for(int i=0;i<s.size();i++){
                if(ans[s[i]]==1){
                    return i;
                }
                
            
        }
        return -1;
    }
};