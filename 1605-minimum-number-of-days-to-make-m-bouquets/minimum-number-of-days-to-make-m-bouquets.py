class Solution:
    def minDays(self, bloomDay: list[int], m: int, k: int) -> int:
        if(m*k>len(bloomDay)):
            return -1
        lo=0
        hi=max(bloomDay)
        mid=0
        curr=0
        tot=0
        while(hi>=lo):
            mid = lo + (hi-lo)//2
            curr=0
            tot=0
            for x in bloomDay:
                if(mid >=x):
                    curr+=1
                    if(curr==k):
                        tot+=1
                        curr=0

                else:
                    curr=0
            if(tot<m):
                lo=mid+1
            else:
                hi=mid-1
        
        return lo
                
            
        