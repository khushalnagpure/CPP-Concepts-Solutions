#include <bits/stdc++.h>
using namespace std;
// use odd even method , left side always be even odd and right side always will be odd even;
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        
        // Handle edge cases
        if (n == 1) return arr[0];
        if (arr[0] != arr[1]) return arr[0];
        if (arr[n-1] != arr[n-2]) return arr[n-1];

        int low = 1, high = n - 2;

        while (low <= high) {
            int mid = (low + high) / 2;

            // safe checks for neighbors
            if (arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) {
                return arr[mid];
            }

            // use pairing property
            if ((mid % 2 == 0 && arr[mid] == arr[mid+1]) ||
                (mid % 2 == 1 && arr[mid] == arr[mid-1])) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1; // should never hit
    }
};
