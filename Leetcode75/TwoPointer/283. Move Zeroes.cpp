/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

/*
time complexity: O(n)
遍歷nums需要O(n)的時間

space complexity: O(1)

使用two pointer的方式遍歷nums
當遇到的數字不為0時，兩個pointer移動到下一個
直到遇到0時zero不移動而i指到下一個不為0的數字進行交換
持續到遍歷完nums
*/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int  n = nums.size();
       int  zero = 0;
       for(int i = 0; i < n; i++){
        if(nums[i]!=0){
            swap(nums[zero],nums[i]);
            zero++;
        }
       }
    }
};

auto init = []() {
    //禁用同步
    ios::sync_with_stdio(false);
    //解除 cin 和 cout 的綁定。Default，每次輸出操作（cout）都會強制刷新輸入流（cin）。
    cin.tie(nullptr);
    cout.tie(nullptr);
    //滿足語法要求
    return 'c';
}
//執行lambda表達式
();
