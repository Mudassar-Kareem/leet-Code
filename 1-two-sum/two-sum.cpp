class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0; i< nums.size(); i++){
            int reminder =  target - nums[i];
            if(map.find(reminder) != map.end()){
                return {map[reminder], i};
            }
            map[nums[i]] =i;
        }
        return {-1,-1};
    }
};