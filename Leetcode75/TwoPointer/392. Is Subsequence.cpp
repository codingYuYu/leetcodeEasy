/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
*/
/*

time complexity: O(n)

space complexity: O(1)

使用two pointer的技巧
sub pointer用來確認s中的字元有沒有出現在t中
main pointer用來遍歷t字串的字元
結束迴圈後檢查sub pointer有沒有指到s的最後一個字元即為所求
*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sub = 0;
        int main = 0;
        int n = s.size();
        int m = t.size();
        while(sub < n && main < m){
            if(s[sub]==t[main]){
                sub++;
            }
            main++;
        }
        return sub==n;
    }
};

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
