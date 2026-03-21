#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int binaryToDecimal(string &b) {
        int ans = 0;
        int digit = 1;
        for (int i = b.size() -1 ; i >= 0; i--){
            if(b[i] == '1'){
                ans += digit;
            }
            digit = digit * 2;
        }
        return ans;
    }
};