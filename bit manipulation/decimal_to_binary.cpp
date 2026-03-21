#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string decToBinary(int n) { 
        string ans = "";
        while(n != 1){
            if(n % 2 == 1){
                ans += "1";

            }
            else{
                ans += "0";
            }
            n = n/2;
        }
        return ans;
    }
};