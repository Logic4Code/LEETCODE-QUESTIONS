class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>x;
        vector<int>ans;
        for(int i=0;i<m;i++){
            x.push_back(nums1[i]);
        }
          for(int i=0;i<n;i++){
            x.push_back(nums2[i]);
        }
        int i=0;
        while(i<m){
            int j=m;
            while(j<m+n && x[j]!=x[i] ) j++;
                int k=j+1;
                while( k<m+n && x[j]>=x[k]) k++;
                if (k == m + n) {
                ans.push_back(-1);
            } else {
                ans.push_back(x[k]);
            }
            i++;
        }
        return ans;
    }
};