class Solution {
public:
    int maximumLength(vector<int>& nums) {
std::map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        int mlen = 1;

        if (counts.count(1)) {
            int c1 = counts[1];
            mlen = (c1 % 2 != 0) ? c1 : c1 - 1;
        }

        for (auto const& [x, count] : counts) {
            if (x == 1) continue;

            int clen = 0;
            long long current = x;

            while (counts.count(current) && counts[current] >= 2) {
                clen += 2;
                current = current * current; 
                
                if (current > 1000000000) break;
            }

            if (current <= 1000000000 && counts.count(current) && counts[current] >= 1) {
                clen += 1;
            } else {
                clen -= 1;
            }

            mlen = max(mlen, clen);
        }

        return mlen;
    }
};