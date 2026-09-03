class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        occ = defaultdict(int)
        for e in nums:
            occ[e] +=1
            if occ[e]>1:
                return True
        return False