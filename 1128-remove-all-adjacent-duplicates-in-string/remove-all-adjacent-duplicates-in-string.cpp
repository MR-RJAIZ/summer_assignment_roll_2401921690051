class Solution {
public:
    string removeDuplicates(string s) {
        string answer="";
        stack<int> st;
        for(int i = 0; i<s.length(); i++){
            if(st.empty() || st.top() != s[i]){
                st.push(s[i]);
            }
            else if(!st.empty() && st.top() == s[i]){
                st.pop();
            }
        }
        while(!st.empty()){
            answer += st.top();
            st.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer; 
    }
};