/*
You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
Example 2:

Input: nums = [5], k = 1
Output: 5.00000
*/

/*

time complexity: O(n)

space complexity: O(1);

先算出第一個window sum的大小
移動window並比較是否比目前的window sum大小還大
找出最大的window sum後除k並回傳
*/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowsum = 0;
        for(int i = 0;i < k;i++){
            windowsum+=nums[i];
        }
        double temp = windowsum;
        for(int i = k;i < nums.size();i++){
            temp = temp + nums[i] - nums[i-k];
            windowsum = max(windowsum,temp);
        }
        return windowsum/k;
    }
};

auto init=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
