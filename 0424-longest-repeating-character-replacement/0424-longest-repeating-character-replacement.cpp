class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxfreq = 0,maxLength=0;
        int left=0,right=0;
        vector<int>freq(26,0);
        while(right<n)
        {
          freq[s[right]-'A']++;
          maxfreq = max(maxfreq,freq[s[right]-'A']);
          
          while((right-left+1)-maxfreq>k)
          {
            freq[s[left]-'A']--;
            left++;
          }
          maxLength = max(maxLength, right-left+1);
          right++;
        }
        return maxLength;
    }
};