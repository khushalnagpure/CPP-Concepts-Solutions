#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector <int> &arr, int low , int high , int target){
    if (low > high)
        return -1;
    int mid = (low+high)/2;
    if (arr[mid] == target)
        return mid;
    
    else if(arr[mid] < target){
        return (arr , mid+1 ,high , target);
    }
    
    else if(arr[mid] > target){
        return(arr , low , mid-1, target);
    }
}

