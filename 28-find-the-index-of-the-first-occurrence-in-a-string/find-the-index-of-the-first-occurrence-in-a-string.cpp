class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0; 
        }
        
        int haystackLen = haystack.size();
        int needleLen = needle.size();
        
        for (int i = 0; i <= haystackLen - needleLen; i++) {
            if (haystack.substr(i, needleLen) == needle) {
                return i;
            }
        }
        
        return -1; 
    }
};
