/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
*/

/*
solution1:
-Time complexity: O(n**2)
外層for迴圈執行n次
迴圈內字串操作需要O(n)時間

-Space complexity: O(n)
ans包含word1+word2字元O(n+m)簡化為O(n)

*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int time = max(word1.size(),word2.size());
        for(int i = 0; i < time ; i++){
            if(!word1.empty()){
                ans+=word1[0];
                word1.erase(0,1);
            }
            if(!word2.empty()){
                ans+=word2[0];
                word2.erase(0,1);
            }
        }
        return ans;
    }
};

/*
solution2(better):
-Time complexity: O(n)
substr添加後續字串需要O(m-n)
整體而言需要O(m+k-n)的時間簡化為O(n)

-Space complexity: O(n)
ans包含word1+word2字元O(n+m)簡化為O(n)
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int time = min(word1.size(),word2.size());
        for(int i = 0; i < time ; i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        ans = ans + word1.substr(time) + word2.substr(time);
        return ans;
    }
};
