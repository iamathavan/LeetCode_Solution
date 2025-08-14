#0 ms|17.91 mb|beasts 100%

class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a=s.strip().split(" ")
        result=len(a[-1])
        return result if result else 0
