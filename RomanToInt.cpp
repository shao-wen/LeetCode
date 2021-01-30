#include <string>
#include <unordered_map>

std::unordered_map<char, int> romans { {'I', 1},    // NOLINT
                                       {'V', 5},
                                       {'X', 10},
                                       {'L', 50},
                                       {'C', 100},
                                       {'D', 500},
                                       {'M', 1000} };

class Solution {
public:
    static int romanToInt(const std::string& s) {
        int result = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            if (romans[ s[i] ] < romans[s[i + 1]])
                result -= romans[ s[i] ];
            else
                result += romans[ s[i] ];
        }
        result += romans[ s[ s.length()-1 ] ];

        return result;
    }
};

int main()
{
    Solution::romanToInt("IV");
}