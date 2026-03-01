#include <bits/stdc++.h>
using namespace std;
int binary_search(vector <int> &arr, int n , int target){
    int low = 0 , high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            low = mid+1;
        }
        else if(arr[mid] > target){
            high = mid-1;
        }
        return -1;
    }
}