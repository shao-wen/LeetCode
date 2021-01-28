#include <vector>

class Solution {
public:
    static void reverseString(std::vector<char>& s)
    {
        if (s.empty())
            return;
        std::size_t l = 0;
        std::size_t r = s.size() - 1;
        char tmp;
        while (l < r) {
            tmp    = s[l];
            s[l++] = s[r];
            s[r--] = tmp;
        }
    }
};

int main()
{
    std::vector<char> v = {'h', 'e', 'l', 'l', 'o'};
    Solution::reverseString(v);
    return 0;
}