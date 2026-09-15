class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        s = set()
        lst = []
        for i in nums:
            if i not in s:
                lst.append(i)
                s.add(i)
        for i in range(len(lst)):
            nums[i] = lst[i]
        return len(lst)
        