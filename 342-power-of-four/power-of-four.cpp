class Solution {
public:
    bool isPowerOfFour(int n) {
        //(4^x - 1) is always divisible by 3
        return n > 0 && (n & (n - 1)) == 0 && (n % 3 == 1);
    }
};