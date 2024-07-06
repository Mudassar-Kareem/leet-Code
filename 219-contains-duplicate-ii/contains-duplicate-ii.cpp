class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        for(int i=0; i<nums.size(); i++){
            if(map1.count(nums[i] )&& abs(i-map1[nums[i]])<=k){
                return true;
            };
            map1[nums[i]] =i;
        }
        return false;
    }
};