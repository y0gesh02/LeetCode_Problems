class Solution {
public:
   
      void help(int idx, int n, int k, int num, vector<int> &ans)
    {
        if(idx == n)
        {
            if(ans.size() == 0 || ans.back() != num)    //To prevent duplicate answers when rem - k == rem + k
                ans.push_back(num);                    
            return;
        }
        
        int rem = num%10;
        
        if(rem + k < 10)
        {
            help(idx+1, n, k, num*10 + (rem+k), ans);
        }
        
        if(rem - k >= 0)
        {
            help(idx+1, n, k, num*10 + (rem-k), ans);
        }
        
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        for(int i = 1; i < 10; i++)
        {
            help(1, n, k, i, ans);
        }
        return ans;



    }
};