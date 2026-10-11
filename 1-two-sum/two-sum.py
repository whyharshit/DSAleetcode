class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        dict1 = {}
        for i,x in enumerate(nums):
            target1 = target - x
            if(target1 in dict1):
                return [i,dict1[target1]]
            
            dict1[x]=i

        return None



        