class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>map1;
        int n=s.size();
        for(int i=0; i<n; i++ ){
            map1[s[i]]++;
        };
        for(int i=0; i<n; i++){
            if(map1[s[i]] == 1){
                return i;
            };
        };
        return -1;
    }
};