class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> a;
        for(int x:nums) if(x>=0) a.push_back(x);
               int n = a.size();
                       if (n <= 1) return nums;

k = k % n;
        reverse(a.begin(),a.begin()+(k));
        reverse(a.begin()+(k),a.end());
        reverse(a.begin(),a.end());
        vector<int> ans;
        for(int i=0,j=0;i<nums.size();i++){
            if(nums[i]<0) ans.push_back(nums[i]);
            else{
                ans.push_back(a[j]);
                j++;
            }
        }
  return ans;
    }
};