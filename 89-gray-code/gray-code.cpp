#include <vector>

class Solution {
public:
    vector<int> grayCode(int n) {
        // Size of the output vector will be 2^n
        int size = 1 << n;
        vector<int> result(size);

        for (int i = 0; i < size; ++i) {
            // Formula: i ^ (i >> 1)
            result[i] = i ^ (i >> 1);
        }

        return result;
    }
};