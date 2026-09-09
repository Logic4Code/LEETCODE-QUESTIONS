class Solution {
public:
    long long countCommas(long long n) {
  if (n < 1000) return 0;

    std::string s = to_string(n);
    long long totalSum = 0;
    for (int i = s.length() - 3; i > 0; i -= 3) {
        long long x = 1;
        for (int k = 0; k < s.length() - i; ++k) {
            x *= 10;
        }
        totalSum += (n - x + 1);
    }

    return totalSum;      
    }
};