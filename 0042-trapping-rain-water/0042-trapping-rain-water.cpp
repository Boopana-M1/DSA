class Solution {
public:
    int trap(vector<int>& nums) {
       int n = nums.size();
       int lmax = 0,rmax =0;
       int ans = 0;
       int i = 0,j=n-1;
       while(i<j)
       {
        if(nums[i]<=nums[j]){
            if(lmax<=nums[i])lmax = nums[i];
            else ans+=lmax-nums[i];
            i++;
        }
        else{
                if(nums[j]>=rmax)rmax = nums[j];
                else ans+=rmax-nums[j];
                j--;
        }
       }
       return ans;
    }
};