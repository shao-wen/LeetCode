#include <unordered_set>

int squareSum(int n)
{
    int result = 0;
    int tmp    = 0;
    while (n) {
        tmp    = n % 10;
        result += tmp * tmp;
        n /= 10;
    }
    return result;
}

class Solution {
public:
    static bool isHappy(int n)
    {
        std::unordered_set<int> records;
        while (n!=1) {
            if (records.count(n)) {return false;}
            records.insert(n);
            n = squareSum(n);
        }
        return true;
    }
};


