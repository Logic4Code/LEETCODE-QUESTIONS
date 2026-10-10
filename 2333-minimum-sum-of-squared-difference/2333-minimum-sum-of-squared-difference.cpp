class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, long long k1, long long k2) {
    int n = nums1.size();
        long long k = (k1) + k2;
        
        int maxi = 0;
        vector<int> x(n);
        long long dif = 0;

        for (int i = 0; i < n; ++i) {
            x[i] = abs(nums1[i] - nums2[i]);
            dif += x[i];
            if (x[i] > maxi) {
                maxi = x[i];
            }
        }

        if (dif <= k) {
            return 0;
        }

        vector<int> count(maxi + 1, 0);
        for (int d : x) {
            count[d]++;
        }

        for (int v = maxi; v > 0; --v) {
            if (count[v] == 0) continue;

            if (k >= count[v]) {
                k -= count[v];
                count[v - 1] += count[v];
                count[v] = 0;
            } else {
                count[v - 1] += k;
                count[v] -= k;
                k = 0;
                break;
            }
        }

        long long ans = 0;
        for (long long v = 1; v <= maxi; ++v) {
            if (count[v] > 0) {
                ans += v * v * count[v];
            }
        }

        return ans;    
    }
};