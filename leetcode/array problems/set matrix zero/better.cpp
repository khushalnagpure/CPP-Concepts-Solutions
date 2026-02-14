#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to set entire row and column to 0 if an element in the matrix is 0
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector <int> row(n , 0);
        vector <int> col(m , 0);
        for(int i = 0 ; i < n; i++){
            for(int j =0; j < m; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;

                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j =0; j < n; j++){
                if(row[i] == 1 || col[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main() {
    // Create the matrix
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    
    // Create Solution object
    Solution obj;
    // Call function
    obj.setZeroes(matrix);
    
    // Print the updated matrix
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}