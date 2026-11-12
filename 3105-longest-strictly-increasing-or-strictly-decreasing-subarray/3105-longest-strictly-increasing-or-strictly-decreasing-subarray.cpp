class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int x=1,y=1,a=1,b=1;
        for(int i=0;i<nums.size()-1;i++){
           if(nums[i+1]>nums[i]){
            x++;
            a=max(a,x);
           }
           else x=1;
        if(nums[i+1]<nums[i]){
            y++;
            b=max(b,y);
           }
           else y=1;
        }
        return max(a,b);
    }
};