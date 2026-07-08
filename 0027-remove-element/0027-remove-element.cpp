class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int s=0;
       int r=nums.size()-1;
       while(s<=r){
        while(r>=0 && nums[r]==val) r--;
        if (s > r) break;
        if(nums[s]==val) swap(nums[s],nums[r]),s++,r--;
        else s++;
       }
       return s;
    }
};