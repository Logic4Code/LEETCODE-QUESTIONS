class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ans=0;
        int t=3;
        int i=0;
        while(t>0){
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] == ans) {
                    swap(nums[i], nums[j]);
                    i++;
                }
            }
            t--;
           ans++;
        }
    }
};