/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
*/
/*

time complexity: O(n)

space complexity: O(1)

使用two pointer檢查array
如果head和tail pointer指到的位置都是vowels則進行交換
不是的話就移動pointer直到兩個pointer都指到element為vowel的位置
*/
class Solution {
public:
    string reverseVowels(string s) {
        int tail = s.size();
        int head = 0;
        unordered_set<char> vowel{'a','e','i','o','u','A','E','I','O','U'};
        while(tail>head){
            if(vowel.count(s[head])&& vowel.count(s[tail])){
                swap(s[head],s[tail]);
                head++;
                tail--;
            }
            else{
                if(!vowel.count(s[head])){
                  head++;
                }
                if(!vowel.count(s[tail])){
                    tail--;
                }

            }
        }
        
        return s;
    }
};

auto init =[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();


/*
use while loop to find vowels
*/
class Solution {
public:
    string reverseVowels(string s) {
        int head = 0, tail = s.size() - 1;
        unordered_set<char> vowel{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        while (head < tail) {
            // Move head pointer until it points to a vowel
            while (head < tail && !vowel.count(s[head])) {
                head++;
            }
            // Move tail pointer until it points to a vowel
            while (head < tail && !vowel.count(s[tail])) {
                tail--;
            }
            // Both pointers point to vowels, swap them
            if (head < tail) {
                swap(s[head], s[tail]);
                head++;
                tail--;
            }
        }
        return s;
    }
};

auto init =[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
