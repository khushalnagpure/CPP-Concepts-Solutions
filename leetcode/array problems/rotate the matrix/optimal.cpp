#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to return matrix in spiral order
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0; j < n ; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        for(int i = 0; i < n; i++){                 //why not nested loop = reverse using 2 elements at once
            reverse(matrix[i].begin() ,matrix[i].end());
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
