#include <iostream>
#include <string>

class Solution {
public:
    static std::string convertToTitle(int n)
    {
        std::string result;
        while (n > 0){
            result.insert(result.begin(), 'A' + ((n - 1) % 26));
            n = (n - 1) / 26;
        }
        return result;
    }
};

int main()
{
    std::cout << Solution::convertToTitle(26 * 26 * 26 * 26) << std::endl;
    return 0;
}
