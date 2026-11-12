class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxi = 0;
        while(left<right)
        {
            if( height[left]<= height[right])
            {
                int length = right-left;
                int width =  height[left];
                maxi = max(maxi,length*width);
                left++;
            }
            else
            {
                int length = right-left;
                int width = height[right];
                maxi = max(maxi,length*width);
                right--;
            }
            cout<<maxi<<" ";
        }
        return maxi;
    }
};