#include <string>
#include <algorithm>

long long turn(int n)
{
    long long result = 0;
    while (n > 0) {
        result = result * 10 + n % 10;
        n      /= 10;
    }
    return result;
}

class Solution {
public:
    static bool isPalindrome1(int x)
    {
        if (x < 0)
            return false;
        return x == turn(x);
    }

    static bool isPalindrome2(int x)
    {
        if (x < 0)
            return false;
        std::string str1 = std::to_string(x);
        std::string str2 = str1;
        reverse(str2.begin(), str2.end());
        return str1 == str2;
    }
};

int main()
{
    Solution::isPalindrome2(-101);
    return 0;
}

