class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int maxarea = 0;
        while(l < r){
            if(heights[l] < heights[r]){
                maxarea = max(maxarea, heights[l] * (r-l));
                l++;
            }
            else{
                maxarea = max(maxarea, heights[r] * (r-l));
                r--;
            }
        }
        return maxarea;
    }
};
