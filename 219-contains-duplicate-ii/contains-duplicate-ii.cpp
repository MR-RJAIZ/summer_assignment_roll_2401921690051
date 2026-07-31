#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastSeen;

        for (int i = 0; i < nums.size(); i++) {
            // Check if we've seen this number before
            if (lastSeen.find(nums[i]) != lastSeen.end()) {
                // Check if the previous occurrence is within distance k
                if (i - lastSeen[nums[i]] <= k) {
                    return true;
                }
            }
            // Update the last seen index of nums[i]
            lastSeen[nums[i]] = i;
        }

        return false;
    }
};