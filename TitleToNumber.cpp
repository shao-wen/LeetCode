#include <iostream>
#include <string>

class Solution {
public:
    static int titleToNumber(const std::string& s)
    {
        long long tmp = 1;
        int result = 0;
        int pos    = (int)s.length() - 1;
        for (; pos >= 0; --pos){
            result += (int)tmp * (s[pos] - 'A' + 1);
            tmp    *= 26;
        }
        return result;
    }
};

int main()
{
    std::cout << Solution::titleToNumber(std::string("ABC")) << std::endl;
    return 0;
}


