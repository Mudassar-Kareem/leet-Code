class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> a;
        sort(nums.begin(), nums.end());
        while(nums.size()){
            double l= (double) nums.front();
            nums.erase(nums.begin());
            double r= (double) nums.back();
            nums.pop_back();
            double avg = (l+r) /2.0;
            a.push_back(avg);
        };
        return *min_element(a.begin(), a.end());
    }
};