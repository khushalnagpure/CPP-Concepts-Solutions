#include <bits/stdc++.h>
using namespace std;

int howmanytimerotated(vector <int> &arr){
    int n = arr.size();
    int mini = INT_MAX ;
    int low= 0, high = n-1;
    while(low <= high){
        int mid = low + (low+high)/2;
        if(arr[low] <= arr[mid]){
            mini = min(mini  , arr[low]);
            low = mid+1;
        }
        else{
            mini = min(mini , arr[mid]);
            high = n-1;
        }

    }
    return arr[mini];
}