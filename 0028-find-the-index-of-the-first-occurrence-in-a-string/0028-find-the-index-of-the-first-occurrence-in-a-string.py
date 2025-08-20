class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
    
        if needle == "":
            return 0
        
        len_h = len(haystack)
        len_n = len(needle)
        
        for i in range(len_h - len_n + 1):
            
            if haystack[i:i+len_n] == needle:
                return i
        
        return -1
