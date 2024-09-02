class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        now = 0
        k %= sum(chalk)

        for i in range(len(chalk)):
            if chalk[i]>k:
                return i
            k-=chalk[i]
        return i