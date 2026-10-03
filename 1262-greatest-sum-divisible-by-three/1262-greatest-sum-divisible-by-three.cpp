class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
      vector<int> a;
      vector<int>b;
      int ans=0;
      for(int i=0;i<nums.size();i++){
        ans+=nums[i];
        if(nums[i]%3==1) a.push_back(nums[i]);
        else if(nums[i]%3==2)b.push_back(nums[i]);
      }  
      if (ans % 3 == 0) return ans;
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
int  x= INT_MAX;
        if (ans % 3 == 1) {
            if (!a.empty()) x = min(x, a[0]);
            if (b.size() >= 2) x = min(x, b[0] + b[1]);
        } else { 
            if (!b.empty()) x = min(x, b[0]);
            if (a.size() >= 2) x = min(x, a[0] + a[1]);
        }

        return (x == INT_MAX) ? 0 : ans - x;
    }
};