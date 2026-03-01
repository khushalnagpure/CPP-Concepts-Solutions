#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the majority element in an array
    
    int majorityElement(vector<int>& nums) { 
        map <int , int> mpp;
        for(int i = 0 ; i < nums.size() ; i ++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second > nums.size()/2)
                return it.first;
        }
        return -1;
    }
};

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    
    // Create an instance of Solution class
    Solution sol;

    int ans = sol.majorityElement(arr);
    
    // Print the majority element found
    cout << "The majority element is: " << ans << endl;
    
    return 0;
}
