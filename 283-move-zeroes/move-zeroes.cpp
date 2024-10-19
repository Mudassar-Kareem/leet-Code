class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastZeroIndex = 0;
        for(int i=0; i< nums.size(); i++){
            if(nums[i] != 0){
                nums[lastZeroIndex]= nums[i];
                lastZeroIndex++;
            }
        };
        for(int i=lastZeroIndex; i< nums.size();i++){
            nums[i]=0;
        }
    }

};