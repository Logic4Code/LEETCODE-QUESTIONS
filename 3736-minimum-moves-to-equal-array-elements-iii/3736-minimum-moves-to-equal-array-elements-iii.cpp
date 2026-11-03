class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++) ans+=nums[nums.size()-1]-nums[i];
        return ans;
    }
};