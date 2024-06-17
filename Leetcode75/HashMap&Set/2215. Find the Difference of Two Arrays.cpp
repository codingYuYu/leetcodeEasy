/*
Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
answer[1] is a list of all distinct integers in nums2 which are not present in nums1.
Note that the integers in the lists may be returned in any order.

 

Example 1:

Input: nums1 = [1,2,3], nums2 = [2,4,6]
Output: [[1,3],[4,6]]
Explanation:
For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].
For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].
Example 2:

Input: nums1 = [1,2,3,3], nums2 = [1,1,2,2]
Output: [[3],[]]
Explanation:
For nums1, nums1[2] and nums1[3] are not present in nums2. Since nums1[2] == nums1[3], their value is only included once and answer[0] = [3].
Every integer in nums2 is present in nums1. Therefore, answer[1] = [].
*/
/* 

time complexity:

space complexity:

使用unordered_map紀錄並進行分類
如果只有nums1有該element的value為1
如果只有nums2有該element的value為2
如果兩個都有該element的value為3
遍歷unordered_map根據value的值push_back到二維的array ans中
*/
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<vector<int>> ans(2);
        for(int i : nums1){
            m[i]=1;
        }
        for(int i : nums2) {
            if(m[i]==1){
                m[i]=3;
            }
            else if(m[i]!=3){
                m[i]=2;
            }
        }
        for(auto i : m) {
            if(i.second==1){
                ans[0].push_back(i.first);
            }
            if(i.second==2){
                ans[1].push_back(i.first);
            }
        }
        return ans;
    }
};

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();