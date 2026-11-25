class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        for(int i:nums)
        {
            st.insert(i);
        }
        if(st.size()==nums.size())return false;
        return true;
    }
};