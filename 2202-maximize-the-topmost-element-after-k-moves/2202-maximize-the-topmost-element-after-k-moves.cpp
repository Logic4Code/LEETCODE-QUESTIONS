class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 1 && k % 2 != 0) {
            return -1;
        }
int p = -1; 
        int i = 0;
        while(i < k - 1 && i < n){
            p = max(p, nums[i]);
            i++; 
        }  
                if (k < n) {
            p = max(p, nums[k]);
        }
        
        return p;
    }
};