class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev1=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int pick=nums[i]+prev2;
            int notpick=prev1;
            int maxi=max(pick,notpick);
            prev2=prev1;
            prev1=maxi;
          
        }
        return prev1;
    }
};