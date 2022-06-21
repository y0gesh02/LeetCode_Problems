class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;
        mp[arr[0]]++;
        for(int i=1;i<arr.size();i++){
           if(arr[i]%2==0 && mp.count(arr[i]/2)){
               return true;
           }
            if( mp.count(arr[i]*2) ) {
                   return true;
            }
            mp[arr[i]]++;
           
        }
        return false;
    }
};