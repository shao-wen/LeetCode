#include <iostream>

class Solution {
public:
    static int bitwiseComplement(int N) {
        if (N == 0)
            return 1;

        int tmp1 = 1;
        int tmp2 = N;
        while (tmp2 > 0)
        {
            N ^= tmp1;
            tmp1 <<= 1;
            tmp2 >>= 1;
        }
        return N;
    }
};

int main() {
    std::cout << Solution::bitwiseComplement(3) << std::endl;
    return 0;
}

/*
异或的特性及应用：
1.与1异或使可特定位翻转
    假设有01111010，想使其低4位翻转，即1变为0，0变为1。可以将它与00001111进行^运算。
    即结果值的低4位正好是原数低4位的翻转，要使哪几位翻转就将与其^运算的该几位置为1即可。
    这是因为原数中值为1的位与1进行^运算得0，原数中的位值0与1进行^运算的结果得1。
2.与0异或不变
    3^0,011^000,结果为011，还是3
3.与自身异或为0
    假设3^3,即011^011，结果为000

用此特性可完成两个数a，b的交换且不需要临时变量
a = a^b  //此时给a赋值a^b
b = a^b  //此时a = a^b 则 b = a^b^b.  得b = a
a = a^b  //此时a = a^b, b = a. 则 a = a^b^a. 得a = b.完成交换
 */
