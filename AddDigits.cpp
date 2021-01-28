int turn(int n)
{
    int result = 0;
    while (n > 0) {
        result += n % 10;
        n      /= 10;
    }
    return result;
}


class Solution {
public:
    static int addDigits(int num)
    {
        int result = num;
        while (result >= 10) {
            result = addSum(result);
        }
        return result;
    }
};

int main()
{
    Solution::addDigits(38);
    return 0;
}