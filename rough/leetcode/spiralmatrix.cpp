#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
        int m = matrix.size(); // number of rows
        int n = matrix[0].size(); // number of columns
        int top = 0, bottom = m - 1, left = 0, right = n - 1;

        while (top <= bottom && left <= right) {
            // Traverse top row
            for (int i = left; i <= right; ++i) {
                result.push_back(matrix[top][i]);
            }
            top++;

            // Traverse right column
            for (int i = top; i <= bottom; ++i) {
                result.push_back(matrix[i][right]);
            }
            right--;

            // Ensure we are still in the matrix bounds before traversing bottom row
            if (top <= bottom) {
                // Traverse bottom row
                for (int i = right; i >= left; --i) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Ensure we are still in the matrix bounds before traversing left column
            if (left <= right) {
                // Traverse left column
                for (int i = bottom; i >= top; --i) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

    return 0;
}