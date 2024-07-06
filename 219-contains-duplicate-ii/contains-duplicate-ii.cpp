class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>Index;
        for(int i=0; i<nums.size(); i++){
            if(Index.find(nums[i]) != Index.end() && i-Index[nums[i]]<=k){
                return true;
            }
            Index[nums[i]] =i;
        }
        return false;
    }
};