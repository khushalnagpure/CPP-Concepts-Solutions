#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0 , high = n-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(arr[mid] == target){
                return mid;
            }
            //using another if so it can run efficiently
            //common mistake using else if****
            if(arr[low] <=  arr[mid]){
                if(arr[low] <= target && target <= arr[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(arr[mid] <= target && arr[high] >= target){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }

};