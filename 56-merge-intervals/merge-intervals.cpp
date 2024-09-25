class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 0){
            return {};
        };
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++){
            vector<int>& preIntervals = result.back();
            vector<int>& currIntervals = intervals[i];
            if(currIntervals[0] <= preIntervals[1]){
                preIntervals[1] = max(preIntervals[1],currIntervals[1]);
            }else{
                result.push_back(currIntervals);
            }
        }
        return result;
    }
};