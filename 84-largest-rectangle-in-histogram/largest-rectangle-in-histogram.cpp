class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        heights.push_back(0);
        int max_area = 0;
        for(int i =0; i < heights.size(); i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                int height = heights[st.top()];
                st.pop();

                int width;
                if(st.empty()){
                    width = i;
                }
                else{
                    width = i - st.top()-1;
                }
                int area = width * height;
                max_area = max(area, max_area);
            }
            st.push(i);
        }
        return max_area;
    }
};