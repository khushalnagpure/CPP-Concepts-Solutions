#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find majority elements in an array
    vector<int> majorityElementTwo(vector<int>& nums) { 
        vector <int> ans;
        map <int , int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] > (nums.size()) + 1){
                ans.push_back(nums[i]);
            }
            if(ans.size() == 2) break;
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};

int main() {
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    
    // Create an instance of Solution class
    Solution sol;
  
    vector<int> ans = sol.majorityElementTwo(arr);
    
    // Print the majority elements found
    cout << "The majority elements are: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "\n";
    
    return 0;
}