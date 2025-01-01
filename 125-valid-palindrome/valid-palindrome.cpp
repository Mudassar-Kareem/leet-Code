class Solution {
public:
    bool isPalindrome(string s) {
        string newstr = "";
        for(auto ch:s){
            if(isalnum(ch)){
                newstr += tolower(ch);
            }
        }
        return newstr == string(newstr.rbegin(),newstr.rend());
    }
};