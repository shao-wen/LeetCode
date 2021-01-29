#include <vector>
#include <string>

static std::vector<std::pair<int, std::string>> table = { {1000, "M"}, //NOLINT
                                                          {900, "CM"},
                                                          {500, "D"},
                                                          {400, "CD"},
                                                          {100, "C"},
                                                          {90, "XC"},
                                                          {50, "L"},
                                                          {40, "XL"},
                                                          {10, "X"},
                                                          {9, "IX"},
                                                          {5, "V"},
                                                          {4, "IV"},
                                                          {1, "I"} };

class Solution {
public:
    static std::string intToRoman(int num)
    {
        std::string result;
        auto it = table.begin();
        while (num > 0 && it != table.end()) {
            if (it->first <= num) {
                result += it->second;
                num -= it->first;
            }
            else it++;
        }
        return result;
    }
};