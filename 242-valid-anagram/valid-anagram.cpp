class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char,int> Smap;
        unordered_map<char,int> Tmap;
        for(int i=0; i< s.size(); i++){
            Smap[s[i]] ++;
            Tmap[t[i]]++;
        }
        return Smap == Tmap ;
    }
};