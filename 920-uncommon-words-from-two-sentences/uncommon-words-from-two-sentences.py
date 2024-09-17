class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        s1 = s1.split(' ')
        s2 = s2.split(' ')
        ans = []
        cnt = defaultdict(int)
        for s in s1:
            cnt[s]+=1
        for s in s2:
            cnt[s]+=1
        for s in cnt:
            if (cnt[s] == 1):
                ans.append(s)
        return ans

        