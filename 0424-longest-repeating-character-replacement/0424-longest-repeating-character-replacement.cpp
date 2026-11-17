class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ans = 0;
        int left =0,right=0;
        int max_freq = 0;

        vector<int>freq(26,0);
        while(right<n)
        {
            int len = right-left+1;
            freq[s[right]-'A']++;
            max_freq = max(max_freq,freq[s[right]-'A']);

            int change = len-max_freq;
            if(change<=k)
            {
                ans = max(ans,len);
            }
            else{
                while((right-left+1)-max_freq >k )
                {
                    freq[s[left]-'A']--;
                    left++;
                    max_freq = 0;
                    for(int i:freq)
                    {
                       max_freq = max(max_freq,i);
                    }
                    //at this point i want to update or reduce my change
                }
            }
            right++;
        }
        return ans;
    }
};