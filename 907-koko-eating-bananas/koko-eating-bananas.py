class Solution:
    def helper(self,piles: list[int],mid: int):
        hours=0
        for x in piles:
             hours+= (x+mid-1)//mid
        return hours
                
    def minEatingSpeed(self, piles: list[int], h: int) -> int:
        lo=1
        hi=max(piles)
        min_bans=float('inf')

        while(hi>=lo):
            mid = lo+ (hi-lo)//2
            taken = self.helper(piles[:],mid)
            if(taken > h):
                lo=mid+1
            else:
                min_bans=min(min_bans,mid)
                hi=mid-1
        return min_bans




        