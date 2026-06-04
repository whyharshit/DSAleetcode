class Solution {
public:
    int reverse(int x) {

        long long n = x;
        long long rev = 0;

        if(n < 0)
            n = -n;

        while(n > 0) {

            int digit = n % 10;

            rev = rev * 10 + digit;

            n /= 10;
        }

        if(x < 0)
            rev = -rev;

        if(rev > INT_MAX || rev < INT_MIN)
            return 0;

        return (int)rev;
    }
};