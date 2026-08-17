class Solution {
public:
    string removeKdigits(string num, int k) {
        string answer = "";
        for(char c : num){
            while(!answer.empty() && k > 0 && answer.back() > c){
                answer.pop_back();
                k--;
            }
            if (!answer.empty() || c != '0') {
                answer.push_back(c);
            }
        }
        while(!answer.empty() && k != 0){
            answer.pop_back();
            k--;
        }
        return answer.empty() ? "0" : answer;
    }
};