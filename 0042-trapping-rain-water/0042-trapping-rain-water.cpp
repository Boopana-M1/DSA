class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0] = 0;
        int lm = nums[0], rm = nums[n-1],ans=0;
        for(int i=1;i<n;i++)
        {
            prefix[i] = lm;
            lm = max(lm,nums[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            suffix[i] = rm;
            rm = max(rm,nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            int me = nums[i];
            int left = prefix[i];
            int right = suffix[i];

            if(left<=me || right<=me)
            {
                continue;
            }
            else
            {
                int store = min(left,right);
                int up = store-me;
                ans = ans+up;
            }
        }
        return ans;
    }
};