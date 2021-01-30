#include <vector>
#include <numeric>

class Solution {
public:
    static int missingNumber(std::vector<int>& nums) {
        int n       = nums.size();
        int sum_n   = (n * (n + 1)) / 2;
        int sum     = std::accumulate(nums.begin(), nums.end(),0);
        int missing = sum_n - sum;
        return missing;
    }
};

int main()
{
    std::vector<int> v = {9,6,4,2,3,5,7,0,1};
    Solution::missingNumber(v);
    return 0;
}


