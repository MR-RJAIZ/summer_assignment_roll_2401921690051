class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.empty()) return {};
        
        // 1. Sort to easily find gaps between consecutive numbers
        sort(nums.begin(), nums.end());
        vector<int> res;
        
        // 2. Look for gaps where the difference between neighbors is > 1
        for (size_t i = 0; i < nums.size() - 1; i++) {
            int current = nums[i];
            int next = nums[i + 1];
            
            // Fill in all missing numbers between current and next
            for (int missing = current + 1; missing < next; missing++) {
                res.push_back(missing);
            }
        }
        return res;
    }
};
