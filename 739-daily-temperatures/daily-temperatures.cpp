#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        // Initialize the result array with 0s
        vector<int> answer(n, 0); 
        
        // The stack will store the *indices* of the temperatures
        stack<int> st; 
        
        for (int i = 0; i < n; ++i) {
            // While stack has unresolved days AND 
            // today's temp is hotter than the temp on the unresolved day
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                // We found a warmer day! Pull that past day out.
                int prevDay = st.top();
                st.pop();
                
                // The wait time is the difference in indices
                answer[prevDay] = i - prevDay;
            }
            // Add today's index to the stack to wait for a warmer day
            st.push(i);
        }
        
        return answer;
    }
};