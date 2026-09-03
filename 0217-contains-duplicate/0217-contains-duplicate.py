class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        occ = defaultdict(int)
        for j in range(len(nums)):
            occ[nums[j]] +=1
            if occ[nums[j]]>1:
                return True
        return False