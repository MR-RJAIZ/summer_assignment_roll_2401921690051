class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector mpp(256, -1);
int left = 0, right = 0, n = s.size();
int maxLen = 0;

while (right < n) {
// If character seen in current window, shift left pointer (19:39-20:41)
if (mpp[s[right]] != -1 && mpp[s[right]] >= left) {
left = mpp[s[right]] + 1;
}

// Store/Update index of the character
mpp[s[right]] = right;

// Update max length 
maxLen = max(maxLen, right - left + 1);
right++;
}
return maxLen;
}
    
};
