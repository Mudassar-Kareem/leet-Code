class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if ( len(s) != len(t)):
            return False
        frq = [0] * 26
        for ch in s:
            frq[ord(ch) -ord('a')] +=1
        for ch in t:
            frq[ord(ch) - ord('a')] -=1
        for c in frq:
            if(c !=0):
                return False
        return True
        
        