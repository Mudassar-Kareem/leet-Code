class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum =0;
        double result =0;
        for(int i=0; i< k; i++){
            sum += nums[i];
            result = sum;
        };
        for(int i=k; i< nums.size(); i++){
            sum = sum - nums[i -k];
            sum = sum + nums[i];
            if(sum > result) {
                result = sum;
            }
        }
        return result / k ;
    }
};