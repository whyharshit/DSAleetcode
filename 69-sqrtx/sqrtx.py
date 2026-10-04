class Solution:
    def mySqrt(self, x: int) -> int:
        lo=0
        hi=x
        while(hi>=lo):
            mid = lo + int((hi-lo)/2)
            if(mid*mid>x):
                hi=mid-1
            elif(mid*mid < x):
                lo=mid+1
            else:
                break
        if(mid*mid==x):
            return int(mid)
        return int(hi)

            
        