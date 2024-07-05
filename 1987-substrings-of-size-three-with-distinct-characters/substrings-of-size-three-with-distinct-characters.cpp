static auto __ = []()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length()<3) return 0;
        int i  = 0;
        int count = 0;
        for(int j = 2; j<s.length(); j++){
            if(s[i] != s[i+1] && s[i] != s[j] && s[i+1]!=s[j]) count++;
            i = j-1;
        }
        return count;
    }
};