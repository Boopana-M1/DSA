class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<pair<int,int>>st;
        int n = nums.size();

        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--)
        {
            int cnt = 1;
              while(!st.empty() && st.top().first <=nums[i])
              {
                    st.pop();
                    cnt++;
              }
              if(st.empty())
              {
                 ans[i]=0;
              }
              else{
                 auto it = st.top();
                 int big = it.second;
                 ans[i] = big-i;
              }
              st.push({nums[i],i});
              
        }
        return ans;
        
    }
};