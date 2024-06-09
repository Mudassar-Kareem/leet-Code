class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1,s2;
        for(auto it1: nums1){
            s1.insert(it1);
        };
        for(auto it2: nums2){
            s2.insert(it2);
        };
        vector<vector<int>> ans(2);
        for(auto it1 : s1){
            if(s2.count(it1) ==0){
                ans[0].push_back(it1);
            };
        };
        for(auto it2: s2){
            if(s1.count(it2) ==0){
                ans[1].push_back(it2);
            };
        };
        return ans;
    }
};