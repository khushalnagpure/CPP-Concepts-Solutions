class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      unordered_map <int , int> set;
      for(int i = 0 ; i < nums1.size(); i++)
        set[nums[i]]++;
       }
      vector <int> ans;
      for(int i =0 ; i < nums2.size(); i++){
          if(set[nums2[i] >0){
            ans.push_back(nums2[i]);
            set[nums[i]]--;
          }
      }
      return ans;

};
