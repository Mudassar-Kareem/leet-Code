class Solution(object):
    def finalValueAfterOperations(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        X =0
        for v in operations:
            if v == "++X" or v == "X++":
                X+= 1
            elif v == "X--" or v == "--X":
                X-=1
            
        return X