class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int c=0,s=0;
        for(int x:nums){
            s=s^x;
            if(x==0) c++;
        }
        if(c==nums.size()) return 0;
        else{
            if(s!=0) return nums.size();
            else{
                return nums.size()-1;
            }
        }
    }
};