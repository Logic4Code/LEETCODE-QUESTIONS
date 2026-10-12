class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    vector<int> ans;
    long long sum = 0;

    for (int num = 2; num <= n; ++num) {
        if (is_prime[num]) {
            if (sum + num <= s) {
                ans.push_back(num);
                sum += num;
            } else {
                break; 
            }
        }
    }

    return ans;
    }
};