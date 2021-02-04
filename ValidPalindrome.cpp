#include <string>

bool isPal(const std::string& s, int l, int r)
{
    while (l < r) {
        if (s[l] != s[r])
            return false;
        ++l;
        --r;
    }
    return true;
}

class Solution {
public:
    static bool validPalindrome(const std::string& s)
    {
        int l     = 0;
        int r     = (int)s.size() - 1;

        if ( s.empty() )
            return false;

        while (l < r) {
            if (s[l] == s[r]) {
                ++l;
                --r;
                continue;
            }
            return isPal(s, l + 1, r) || isPal(s, l, r - 1);
        }
        return true;
    }
};

int main()
{
    Solution::validPalindrome("abc");
    return 0;
}
