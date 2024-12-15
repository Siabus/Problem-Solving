#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        while (start < end) {
            if (s[start++] != s[end--]) {
                return false;
            }
        }
        return true;
    }

    void substri(string s, vector<string>& ss, vector<vector<string>>& sss) {
        if (s.empty()) {
            sss.push_back(ss);
            return;
        }
        for (int i = 1; i <= s.size(); i++) {
            string tmp = s.substr(0, i);
            if (!isPalindrome(tmp)) {
                continue;
            }
            ss.push_back(tmp);
            substri(s.substr(i), ss, sss);
            ss.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> sss;
        vector<string> ss;
        substri(s, ss, sss);
        return sss;
    }
};
