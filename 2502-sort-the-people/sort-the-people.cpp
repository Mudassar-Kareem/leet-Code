class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> data;
        for(int i=0; i<heights.size(); i++){
            data.push_back(make_pair(heights[i],names[i]));
        };
        sort(data.rbegin(), data.rend());
        vector<string> name;
        for(auto& p:data){
            name.push_back(p.second);
        }
        return name;
    }
};