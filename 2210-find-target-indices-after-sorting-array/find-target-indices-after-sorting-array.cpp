class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>index;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                index.push_back(i);
            };
        };
        sort(index.begin(), index.end());
        return index;
    }
};