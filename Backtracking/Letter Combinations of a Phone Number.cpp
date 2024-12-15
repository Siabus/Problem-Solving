#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void backtrack(const string& digits,int idx,string comb,vector<string>& res,const unordered_map<char,string>& digittoletters)
    {
        if(idx==digits.size())
        {
            res.push_back(comb);
            return;
        }
        string letters=digittoletters.at(digits[idx]);
        for(char letter : letters)
        {
            backtrack(digits,idx+1,comb+letter,res,digittoletters);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> res;

        if(digits.empty()) {
            return res;
        }

        unordered_map<char, string> digittoletters = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        backtrack(digits, 0, "", res, digittoletters);
        return res;
    }
};
