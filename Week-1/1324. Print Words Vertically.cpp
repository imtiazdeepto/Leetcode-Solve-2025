class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> words;
        istringstream iss(s);
        string word;
        int len = 0, sz = 0;
        int cnt = 0;
        while (iss >> word) {
            words.push_back(word);
            len = max(len,(int)word.length());
        }
        int n = words.size();
        vector<string> res;
        for (int i = 0; i < len; i++) {
            string curr;
            for (int j = 0; j < n; j++) {
                if (i < words[j].length()) {
                    curr += words[j][i];
                } else {
                    curr += ' ';
                }
            }
            while (!word.empty() and curr.back() == ' ') {
                curr.pop_back();
            }
            res.push_back(curr);
        }
            return res;
        }
    };
