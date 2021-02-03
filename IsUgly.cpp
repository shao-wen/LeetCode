class Solution {
public:
    static bool isUgly(int num) {
        if (num < 1)
            return false;

        while (num% 3 == 0)
            num = num / 3;

        while (num % 5 == 0)
            num = num / 5;

        while (num % 2 == 0)
            num = num / 2;

        return num == 1;
    }
};

int main()
{
    Solution::isUgly(1500);
    return 0;
}