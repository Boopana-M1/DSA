class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==1 || n==0)return n;
        int left = 0;
        int right = 0;
        vector<int>lastseen(256,-1);
        int cnt = 0;
        int maxi = 0;
        while(right<n)
        {
            int index_of_char = s[right]-'\0';
            if(lastseen[index_of_char]!=-1)
            {
                if(lastseen[index_of_char] >=left)left = lastseen[index_of_char]+1;
            }
            
            cnt = right-left+1;
            maxi = max(maxi,cnt);
            lastseen[index_of_char] = right;
            right++;
        }
        return maxi;
    }
};