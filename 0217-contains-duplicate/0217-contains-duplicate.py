class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        occ = set()
        for e in nums:
            if e in occ:
                return True
            occ.add(e)
        return False