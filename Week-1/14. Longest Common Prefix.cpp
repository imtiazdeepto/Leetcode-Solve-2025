class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        if (v.empty())
            return "";
        sort(v.begin(), v.end());
        string f = v[0], l = v.back();
        int ans = 0;
        for (int i = 0; i < f.size(); i++) {
            if (f[i] == l[i]) {
                ans++;
            } else {
                break;
            }
        }
        string res = "";
        if (ans > 0) {
            res = l.substr(0, ans);
        }
        return res;
    }
};
