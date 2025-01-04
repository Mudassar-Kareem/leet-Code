class Solution {
public:
    int maxArea(vector<int>& height) {
       int l =0;
       int r=height.size()-1;
       int res =0;
       while(l< r){
        int h = min(height[l],height[r]);
        int w = r - l;
        int area = h * w;
        res = max(res,area);
        if(height[l]< height[r]){
            l++;
        }else{
            r--;
        }
       }
       
       return res;
    }
};