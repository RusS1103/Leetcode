class Solution:
    def removeDuplicates(self, s: str, k: int) -> str:
        # (char, int)
        st = []
        for i in range(len(s)):
            if len(st) == 0:
                st.append((s[i], 1))
            else:
                if st[-1][0] == s[i]:
                    st.append((s[i], st[-1][1] + 1))
                else:
                    st.append((s[i], 1))
                    
            if st[-1][1] == k:
                while len(st) != 0 and st[-1][0] == s[i]:
                    st.pop()
        
        result = ''
        while len(st) != 0:
            result += st.pop()[0]
        
        
        return result[::-1]

