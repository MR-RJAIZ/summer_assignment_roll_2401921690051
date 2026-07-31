#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        string currStr = "";
        int currNum = 0;

        for (char c : s) {
            if (isdigit(c)) {
                // Handle multi-digit numbers (e.g., 10, 100)
                currNum = currNum * 10 + (c - '0');
            } 
            else if (c == '[') {
                // Save current context to stacks before moving inside brackets
                numStack.push(currNum);
                strStack.push(currStr);
                
                // Reset for the inner string
                currNum = 0;
                currStr = "";
            } 
            else if (c == ']') {
                // Retrieve multiplier and previous string prefix
                int count = numStack.top();
                numStack.pop();
                
                string prevStr = strStack.top();
                strStack.pop();

                // Repeat current string 'count' times onto prevStr
                while (count--) {
                    prevStr += currStr;
                }
                
                // Update current string to the combined string
                currStr = prevStr;
            } 
            else {
                // Regular character: append to current working string
                currStr += c;
            }
        }

        return currStr;
    }
};
