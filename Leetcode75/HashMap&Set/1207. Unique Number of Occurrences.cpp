/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
*/

/*

time complexity: O(n)

space complexity: O(n)

建立hash map紀錄每一種數字出現幾次
初始化一個array因為題目最多只可能出現1000個數字設置為(1001,0)
遍歷hash map將出現過的次數在array中標記為1
如遇到該次數已標記為1則回傳false
如成功遍歷完hash map則回傳true
*/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> record;
        vector<int> check(1001,0);
        for(auto i : arr){
            record[i]++;
        }
        for(auto i : record){
            if(check[i.second]==1){
                return false;
            }
            check[i.second]++;
        }
        return true;
    }
};

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
