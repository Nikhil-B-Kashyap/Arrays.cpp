/* Generate Parentheses
Solved 
You are given an integer n. Return all well-formed parentheses strings that you can generate with n pairs of parentheses.

Example 1:

Input: n = 1

Output: ["()"]
Example 2:

Input: n = 3

Output: ["((()))","(()())","(())()","()(())","()()()"] */


#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> res(n + 1);
        res[0] = {""};
        
        for (int k = 1; k <= n; ++k) {
            for (int i = 0; i < k; ++i) {
                for (const string& left : res[i]) {
                    for (const string& right : res[k - i - 1]) {
                        res[k].push_back("(" + left + ")" + right);
                    }
                }
            }
        }

        return res[n];
    }
};