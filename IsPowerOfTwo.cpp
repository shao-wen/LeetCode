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

/**
 * 任何进制下的整数次幂都是从10开始到100, 1000, 10000, ...
 * 为什么呢？例如N进制
 * 因为计数从0开始 所以到N-1一个就有N个数 而再往上加一才能数到N，也就是说0～N共有N+1个数，
 * 那N进制肯定单位不能表示N+1的数了 所以需要进位才能表示 即10
 */