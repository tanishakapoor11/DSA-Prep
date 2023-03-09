class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        def reverse(nums, start):
            end = len(nums)-1
            while start < end:
                nums[start], nums[end] = nums[end], nums[start]
                start = start+1
                end = end -1
        i = len(nums) -2
        while i>=0 and nums[i+1]<=nums[i]:
            i = i-1
        if i>=0:
            j = len(nums) -1
            while nums[j] <= nums[i]:
                j = j-1
            nums[i], nums[j] = nums[j], nums[i]
        reverse(nums, i+1)
