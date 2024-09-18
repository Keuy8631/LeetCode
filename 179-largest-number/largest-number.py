class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        num_strings = [str(num) for num in nums]
        # print(num_strings)
        num_strings.sort(key = lambda a: a*10,reverse = True)
        # print(num_strings)

        if num_strings[0] == "0":
            return "0"

        return "".join(num_strings)