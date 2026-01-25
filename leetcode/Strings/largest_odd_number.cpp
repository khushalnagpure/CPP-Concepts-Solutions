#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Returns the largest odd number substring from the given string
    string largeOddNum(string& s) {
        int n = s.length();
        int ind = -1;
        for(int i = n-1 ; i >= 0 ; i--){
            if((s[i] - '0') % 2 == 1 ){
                ind = i;
                break;     
            }
        }
        int i = 0;
        while(i <= ind && s[i] == '0'){
            i++; 
        }
        return s.substr(i , ind - i + 1);


    }
};

int main() {
    Solution solution;
    string num = "504";
    string result = solution.largeOddNum(num);
    cout << "Largest odd number: " << result << endl;
    return 0;
}