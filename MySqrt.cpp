#include <cmath>

inline double f(double x, int a)
{
    return x * x - a;
}

inline double df(double x)
{
    return 2 * x;
}


class Solution{
public:
    static long int mySqrt1(int x)
    {
        long int l = 0;
        long int r = x;

        while (l <= r) {
            long int mid = l + (r - l) / 2;
            if (mid * mid == x)
                return mid;
            else {
                if (mid * mid > x)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        return r;
    }

    static long int mySqrt2(int x)
    {
        if (x < 2)
            return x;
        double start = 1;
        do {
            start = start - f(start, x) / df(start);
        } while (fabs(x - start * start) >= 1);
        return (long int)start;
    }

    static long int mySqrt3(int x)
    {
        return (long int)pow(10, (log10(x) / 2));
    }
};

int main()
{
    long int a;
    a = Solution::mySqrt2(3);
    return 0;
}



