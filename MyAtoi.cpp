#include <string>

class Solution{
public:
    static int myAtoi(const std::string& str)
    {
        if (str.empty())
            return 0;
        int result      = 0;
        int sign        = 1;
        std::size_t pos = 0;

        while (pos < str.length() && str[pos] == ' ')
            ++pos;
        if ( pos < str.length() && (str[pos] == '-' || str[pos] == '+'))
            sign = str[pos++] == '+' ? 1 : -1;

        while (pos < str.length() && str[pos] >= '0' && str[pos] <= '9'){
            if ( result > INT32_MAX/10 || (result == INT32_MAX/10 && str[pos] - '0' > INT32_MAX%10) )
                return (sign == 1) ? INT32_MAX : INT32_MIN;
            result = result * 10 + (str[pos++] - '0');
        }
        return result * sign;
    }
};