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
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty())return 0;

        int rows = matrix.size(), cols = matrix[0].size();

        vector<int> heights(cols,0);
        int maxArea = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == '1'){
                    heights[j]++;
                }
                else{
                    heights[j] = 0;
                }
            }
            // we apply histogram in every row 
            maxArea = max(maxArea, largestRectangleArea(heights)); 
        }
        return maxArea;
    }
};