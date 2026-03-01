#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the majority element in an array
    
    int majorityElement(vector<int>& nums) { 
        int el;
        int count1 = 0 , count2 = 0;
        for(int i =0; i < nums.size() ; i++){
            if(count1 == 0){
                count1 = 1;
                el = nums[i];
            }
            else if(nums[i] == el){
                count1++;
            }
            else if(nums[i] != el)
                count1--;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == el){
                count2++;
            }
            if(count2 > nums.size()/2){
                return el;
            }
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