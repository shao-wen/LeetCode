/*A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.*/

// Pigeonhole principle

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
        while (n != 1) {
            if (records.count(n)) {return false;}
            records.insert(n);
            n = squareSum(n);
        }
        return true;
    }
};

