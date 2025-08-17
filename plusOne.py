'''
111 / 111 test cases passed.
Status: Accepted
Runtime: 3 ms
Memory Usage: 17.6 MB
'''
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num=0
        for i in digits:
            num*=10
            num+=i
        num+=1
        return [int(n) for n in str(num)]
