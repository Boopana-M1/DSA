class Solution {
    public:
    int fn(int index,vector<int>&cost)
    {
        if(index<0)return 0;
        if(index==0 || index==1)return cost[index];
        return cost[index]+min(fn(index-1,cost),fn(index-2,cost));

    }
    int minCostClimbingStairs(vector<int>&cost) {
        int n = cost.size();
        vector<int>dp(n);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2;i<n;i++)
        {
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-2],dp[n-1]);
    }
};