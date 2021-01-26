class Solution {
public:
    static bool isPowerOfTwo1(int n)
    {
        if (n <= 0) {return false;}
        if (n == 1) {return true;}
        while (n > 1) {
            if (n % 2 !=0) {return false;}
            n = n / 2;
        }
        return true;
    }

    static bool isPowerOfTwo2(long long int n)
    {
        return (n && !(n & (n - 1)));
    }
};


