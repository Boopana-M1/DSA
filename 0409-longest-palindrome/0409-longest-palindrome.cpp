class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>arr(58,0);
        for(char c:s)
        {
            arr[c-'A']++;
        }
        int ans = 0;
        bool flag = false;
        for(int i:arr)
        {
            if(i%2==0)ans+=i;
            else{
                if(i-1>0)ans+=i-1;
                if(flag==false)
                {
                    flag = true;
                    ans+=1;
                }                
            }
        }
        return ans;
    }
};