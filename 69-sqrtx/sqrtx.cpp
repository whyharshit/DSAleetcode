class Solution {
public:
    int mySqrt(int x) {
        int lo = 0;
        int hi = x;
        long long mid;
        while(hi>=lo){
            mid = lo + (hi-lo)/2;
            if(mid*mid > x) hi=mid-1;
            else if(mid*mid < x) lo=mid+1;
            else{
                break;
            }
        }

        if(mid*mid==x)return mid;
        return hi;
    }
};