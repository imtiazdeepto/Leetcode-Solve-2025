class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]] = i;
        }
        vector<int> res;
        int sum = 0;
        int idx = 0;
        int start = 0, end = 0;
        while (idx < n) {
            end = max(end, mp[s[idx]]);
            if (idx == end) {
                res.push_back(end - start + 1);
                start = idx + 1;
            }
            idx++;
        }
        return res;
    }
};
