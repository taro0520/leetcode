class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a=s.split(' ')
        i=len(a)-1
        while len(a[i])==0:
            if len(a[i])==0:
                i-=1
        return len(a[i])