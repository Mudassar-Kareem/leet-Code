class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int longest =0;
        for(auto num : nums){
            if(!st.count(num - 1)){
                int currentNum = num;
                int currentStreak = 1;
                while(st.count(currentNum + 1)){
                    currentNum++;
                    currentStreak++;
                }
                longest = max(longest,currentStreak);
            }
        }
        return longest;
    }
};