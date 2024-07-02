class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double n=salary.size();
        double sum =0;
        for(int i=1; i<n-1; i++){
            sum += salary[i];
        };
        double count = n-2;
        return sum/count;
    }
};