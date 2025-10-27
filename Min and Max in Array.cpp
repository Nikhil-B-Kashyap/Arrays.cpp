/*Min and Max in Array
Difficulty: BasicAccuracy: 68.55%Submissions: 386K+Points: 1Average Time: 10m
Given an array arr[]. Your task is to find the minimum and maximum elements in the array.

Examples:

Input: arr[] = [1, 4, 3, -5, -4, 8, 6]
Output: [-5, 8]
Explanation: minimum and maximum elements of array are -5 and 8.
Input: arr[] = [12, 3, 15, 7, 9]
Output: [3, 15]
Explanation: minimum and maximum element of array are 3 and 15.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 109

*/

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> m=arr;
        vector<int> n;
        sort(arr.begin(),arr.end());
       int min=arr[0];
       int max=arr[arr.size()-1];
       return {min,max};
    }
};