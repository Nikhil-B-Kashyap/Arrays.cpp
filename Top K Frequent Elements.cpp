/*Top K Frequent Elements
Solved 
Given an integer array nums and an integer k, return the k most frequent elements within the array.

The test cases are generated such that the answer is always unique.

You may return the output in any order.

Example 1:

Input: nums = [1,2,2,3,3,3], k = 2

Output: [2,3]
Example 2:

Input: nums = [7,7], k = 1

Output: [7]*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int, int> count;
        for (int n : nums) {
            count[n]++;
        }

        vector<pair<int, int>> a;
        for (const auto& p : count) {
            a.push_back({p.second, p.first});
        }
        sort(a.rbegin(), a.rend());

        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(a[i].second);
        }
        return res;
    }
};
    