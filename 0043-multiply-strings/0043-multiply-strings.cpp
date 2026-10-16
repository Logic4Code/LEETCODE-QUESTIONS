class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1=="0" || num2=="0") return "0";
    int m = num1.size() - 1, n = num2.size() - 1, c = 0;
    string p;
    for (int i=0; i<=m+n || c; ++i) {
        for (int j=max(0, i-n); j<=min(i, m); ++j)
            c += (num1[m-j] - '0') * (num2[n-i+j] - '0');
        p += c % 10 + '0';
        c /= 10;
    }
    reverse(begin(p), end(p));
    return p;

    }
};