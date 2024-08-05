class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> counts;
        for( string& s: arr){
            counts[s]++;
        }
        vector<string> distinitString;
        for(string& s:arr){
            if(counts[s] == 1){
                distinitString.push_back(s);
            }
        }
        if(k>=1 && k<=distinitString.size()){
            return distinitString[k-1];
        } else{
            return "";
        }
    }
};