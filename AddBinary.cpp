#include <string>
#include <iostream>

class Solution {
public:
    static std::string addBinary(std::string a, std::string b)
    {
        std::string result;
        int pos_a = (int)a.length() - 1;
        int pos_b = (int)b.length() - 1;
        int flag          = 0;

        while (pos_a >= 0 && pos_b >= 0)
        {
            int sum = (a[pos_a] - '0') + (b[pos_b] - '0') + flag;
            int mnd = sum % 2;
            flag    = sum / 2;
            result  += char(mnd + '0');
            --pos_a;
            --pos_b;
        }
        while (pos_a >= 0)
        {
            int sum = a[pos_a]-'0' + flag;
            int mnd = sum % 2;
            flag    = sum / 2;
            result  += char(mnd + '0');
            --pos_a;
        }
        while (pos_b >= 0)
        {
            int sum = b[pos_b]-'0' + flag;
            int mnd = sum % 2;
            flag    = sum / 2;
            result  += char(mnd + '0');
            --pos_b;
        }
        if (flag != 0)
            result += char(flag + '0');

        std::size_t l = 0;
        std::size_t r = result.length() - 1;
        while (l < r)
        {
            std::swap(result[l], result[r]);
            ++l;
            --r;
        }
        return result;
    }
};


int main()
{
    std::cout<<Solution::addBinary("11", "1")<<std::endl;
    return 0;
}


