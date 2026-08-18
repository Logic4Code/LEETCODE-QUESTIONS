class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
       map<int,int> x;
       int ans=0;
       for(int z:nums) x[z]++;
            if (k == 1) {
            int ans = -1;
            for (auto& [p, c] : x) {
                if (c == 1) {
                    ans = max(ans, p);
                }
            }
            return ans;
        }
        else if (k == nums.size()) {
            return *max_element(nums.begin(), nums.end());
        }
       else if(x[nums[nums.size()-1]]==1 && x[nums[0]]==1 && nums[0]!=nums[nums.size()-1]) return max(nums[0],nums[nums.size()-1]);
       else if(x[nums[nums.size()-1]]==1 && x[nums[0]]!=1) return nums[nums.size()-1];
        else if(x[nums[nums.size()-1]]!=1 && x[nums[0]]==1) return nums[0];
        else return -1;

    }
};