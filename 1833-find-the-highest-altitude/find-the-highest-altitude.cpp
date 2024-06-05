class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int max1 = 0;
        for(int i =0 ; i < gain.size(); i ++){
            sum += gain[i];
            max1= max(sum, max1);
        };
        return max1;
    }
};