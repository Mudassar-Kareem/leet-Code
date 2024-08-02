class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int totalOnes = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                totalOnes++;
            }
        }
        int i=0;
        int j=0;
        int currOnes =0;
        int maxCounts=0;
        while(j< 2*n){
            if(nums[j%n] ==1){
                currOnes++;
            }
            if(j-i+1 >totalOnes){
                currOnes -=nums[i%n];
                i++;
            }
            maxCounts=max(maxCounts,currOnes);
            j++;
        }
        return totalOnes-maxCounts;
    }
};