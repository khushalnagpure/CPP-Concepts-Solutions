#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to return matrix in spiral order
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        vector<vector<int>> ans(m , vector<int> (m));
        for(int i = 0; i < m ; i++ ){
            for(int j = 0; j < m; j++){
                ans[j][(m-1) - i] = matrix[i][j];
            }
        }
        matrix = ans;
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
