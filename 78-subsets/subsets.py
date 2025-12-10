class Solution:
    
    def subsets(self, nums: List[int]) -> List[List[int]]:
        x=[]
        def helper(nums,list1,i):
            if(i==len(nums)):
                x.append(list1[:])
                return
            
            helper(nums,list1,i+1)
            list1.append(nums[i])
            helper(nums,list1,i+1)
            list1.pop()
        helper(nums,[],0)

        return x


        

        

        
       

        
        