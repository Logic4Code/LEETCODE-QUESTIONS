class Solution {
public:
    int calPoints(vector<string>& operations) {
     vector<int> a;

        for (const string& op : operations) {
            if (op == "+") {
                int n = a.size();
                a.push_back(a[n - 1] + a[n - 2]);
            } 
            else if (op == "D") {
                a.push_back(2 * a.back());
            } 
            else if (op == "C") {
                a.pop_back();
            } 
            else {
                a.push_back(std::stoi(op));
            }
        }

        return accumulate(a.begin(), a.end(), 0);
    }
};