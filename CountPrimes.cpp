#include <vector>
#include <cmath>

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

class Solution {
public:
    static int countPrimes1(int n)
    {
        std::vector<int> prime(n,true);
        int count = 0;
        for (int i = 2; i < n; ++i) {
            if (prime[i]) {
                for (int j = i; j < n; j = j + i)
                    prime[j] = false;   //all multiples of i will be non-prime
                count++;
            }
        }
        return count;
    }

    static int countPrimes2(int n)
    {
        int count = 0;
        for (int i = 2; i < n; ++i) {
            if (isPrime(i))
                ++count;
        }
        return count;
    }
};

int main()
{
    Solution::countPrimes2(10);
    return 0;
}