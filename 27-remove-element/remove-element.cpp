class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int lenght = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != val){
                nums[lenght] =nums[i];
                lenght++;
            }
        }
        return lenght;
    }
};