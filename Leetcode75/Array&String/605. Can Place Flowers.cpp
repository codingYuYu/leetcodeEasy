/*
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

 

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
*/
/*

time complexity: O(n)

space complexity: O(1)

如檢查位置沒有種花確認前後也沒有種花
迴圈前後處理edge case
*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int space = 0;
        int m = flowerbed.size();
        if(flowerbed[0]==0 && m == 1){
            return true;
        }
        if(!flowerbed[0] && !flowerbed[1]){
            space++;
            flowerbed[0]=1;
        }
        for(int i  = 1;i < m-1;i++){
            if(!flowerbed[i] && !flowerbed[i+1] && !flowerbed[i-1] ){
                space++;
                flowerbed[i] = 1;
            }
        }
        if(!flowerbed[m-1] && !flowerbed[m-2]){
            space++;
        }
        return space>=n?true:false;
    }
};

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
