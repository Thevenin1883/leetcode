class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r= height.size() - 1;
        int res = 0;
        while(r > l){
            int currentArea = (r - l) * min(height[l], height[r]);
            res = max(res, currentArea);
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
};