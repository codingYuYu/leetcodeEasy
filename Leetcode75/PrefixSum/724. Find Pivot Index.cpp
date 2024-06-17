/*
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

 

Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
Example 2:

Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.
Example 3:

Input: nums = [2,1,-1]
Output: 0
Explanation:
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0
*/

/*

time complexity: O(n)

space complexity: O(1)

找一個index其左邊和右邊加總要相同沒有則回傳-1
先把全部加總給sumL
遍歷nums將sumL扣除當前element後比較sumR、sumL是否相同
不同則將sumR加上目前element
持續比較到nums最後一個element都找不到則回傳-1
*/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumR = 0;
        int sumL = 0;
        for(auto i : nums){
            sumL+=i;
        }
        for(int i = 0; i < nums.size(); i++){
            sumL-=nums[i];
            if(sumR==sumL){
                return i;
            }
            sumR+=nums[i];
        }
        return -1;
    }
};

auto init=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
