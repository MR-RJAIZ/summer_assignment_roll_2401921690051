class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        backtrack(ans, "", 0, 0, n);
        
        return ans;
    }

private:
    void backtrack(vector<string>& ans, string current,
                   int open, int close, int n) {
        
        // Valid combination is complete
        if (current.size() == 2 * n) {
            ans.push_back(current);
            return;
        }

        // Add opening bracket if available
        if (open < n) {
            backtrack(ans, current + "(", open + 1, close, n);
        }

        // Add closing bracket only if it doesn't become invalid
        if (close < open) {
            backtrack(ans, current + ")", open, close + 1, n);
        }
    }
};