class Solution:
    def findFinalValue(self, nums: List[int], original: int) -> int:
        counts = collections.Counter(nums)
        while original in counts:
            original *= 2
        return original
        