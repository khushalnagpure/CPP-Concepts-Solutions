#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to return matrix in spiral order
    vector<int> spiralOrder(vector<vector<int>>& matrix) { 
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0 , bottom = n-1;
        int left = 0 , right = m-1;
        vector<int> ans;
        while(left <= right && top <= bottom){
            for(int i = left ; i <= right ; i++ ){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top ; i <= bottom ; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            while(top <= bottom ){
                for(int i = right ; i >= left ; i-- ){
                   ans.push_back(matrix[bottom][i]);
                }
            }
            bottom--;
            while(left <= right){
                for(int i = bottom; i >= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
    }
};

// Driver code
int main() {
    Solution obj;

    vector<vector<int>> matrix = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };

    vector<int> result = obj.spiralOrder(matrix);

    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}