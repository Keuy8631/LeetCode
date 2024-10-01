class Solution:
    def canArrange(self, arr: List[int], k: int) -> bool:
        remainder_cnt = defaultdict(int)
        for i in arr:
            remainder_cnt[(i%k+k)%k] +=1

        for i in arr:
            rem = (i%k+k) %k
            if rem == 0:
                if remainder_cnt[rem] %2 ==1:
                    return False
            elif remainder_cnt[rem] != remainder_cnt[k-rem]:
                return False


        return True