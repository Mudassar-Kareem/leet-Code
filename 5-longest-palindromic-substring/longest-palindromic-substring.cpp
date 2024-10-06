class Solution {
public:
    bool solve(string &s, int i, int j) {
        if (i >= j) {
            return true;
        }
        if (s[i] == s[j]) {
            return solve(s, i + 1, j - 1);
        } else {
            return false;
        }
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int maxLen = 0;  // Initialize to 0 to find the maximum length
        int sp = 0;  // Start position of the longest palindrome

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (solve(s, i, j)) {  // If the substring s[i...j] is a palindrome
                    if (j - i + 1 > maxLen) {  // Calculate length correctly
                        maxLen = j - i + 1;
                        sp = i;
                    }
                }
            }
        }

        // Return the longest palindromic substring
        return s.substr(sp, maxLen);
    }
};
