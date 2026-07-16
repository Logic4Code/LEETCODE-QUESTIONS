class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>a;
        vector<int> ans;
        int c=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                c++;
            }
            else{
                a.push_back({c,nums[i-1]});
                c=1;
            }
        }
    a.push_back({c,nums.back()});
    sort(a.begin(), a.end(), greater<pair<int, int>>());
  for(int i=0;i<a.size()&& i<k;i++){
    ans.push_back(a[i].second);
  }
  return ans;
    }
};