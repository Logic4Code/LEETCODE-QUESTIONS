class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int& x : nums) {
            x = abs(x);
        }
        sort(nums.begin(),nums.end());
        long long ans=0;
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            if (l == r) {
                ans +=nums[l] * nums[l]; 
                break;
            }
            ans+=nums[r]*nums[r]-nums[l]*nums[l];
            l++;
            r--;
        }
        return ans;
    }
};