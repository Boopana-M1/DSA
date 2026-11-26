class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        sort(nums.begin(),nums.end());
        int num=nums[0];
        int cnt = 1;
        for(int i=1;i<n;i++){
            if(cnt==0){
                num=nums[i];
                cnt=1;
            }
            if(nums[i]==num){
                cnt++;
            }
            else{
                cnt--;
            }
        }
       return num;

    }
};