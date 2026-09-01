class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      long long xor_all = 0;
    for (int num : nums) {
        xor_all ^= num;
    }
    
    long long diff_bit = xor_all & (-xor_all);
    
    int a = 0, b = 0;
    for (int num : nums) {
        if (num & diff_bit) {
            a ^= num;
        } else {
            b ^= num;
        }
    }
    
    return {a, b};  
    }
};