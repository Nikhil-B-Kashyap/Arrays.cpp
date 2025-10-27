/* Sort 0s, 1s and 2s
Difficulty: MediumAccuracy: 50.58%Submissions: 819K+Points: 4Average Time: 10m
Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.
Note: You need to solve this problem without utilizing the built-in sort function.

Examples:

Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
Follow up: Could you come up with a one-pass algorithm using only constant extra space?

Constraints:
1 ≤ arr.size() ≤ 106
0 ≤ arr[i] ≤ 2*/

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int i,zero=0,one=0,two=0;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
                zero++;
            else if(arr[i]==1)
                one++;
            else if(arr[i]==2)
                two++;
        }
        i=0;
        while(zero--)
            arr[i++]=0;
        while(one--)
            arr[i++]=1;
        while(two--)
            arr[i++]=2;
    }
};