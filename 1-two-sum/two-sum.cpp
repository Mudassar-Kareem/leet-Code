class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mymap;
        for(int i =0; i< nums.size() ; i++){
            int reminder = target- nums[i];
            if(mymap.count(reminder)){
                return {i, mymap[reminder]};
            };
            mymap[nums[i]]=i;
        };
        return {-1,-1};
        
    }
};