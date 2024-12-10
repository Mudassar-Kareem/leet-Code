class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int l = s.length();
        vector<int> indexS(256,-1);
        vector<int> indexT(256,-1);
        for(int i=0; i<l;i++){
            if(indexS[s[i]] != indexT[t[i]]){
                return false;
            };
            indexS[s[i]] =i;
            indexT[t[i]] =i;
        }
        return true;
    }
};