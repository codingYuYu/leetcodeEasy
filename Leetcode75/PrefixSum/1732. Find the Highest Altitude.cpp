/*
There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0.

You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point.

 

Example 1:

Input: gain = [-5,1,5,0,-7]
Output: 1
Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
Example 2:

Input: gain = [-4,-3,-2,-1,4,3,2]
Output: 0
Explanation: The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.
*/

/*

time complexity: O(n)

space compolexity: O(1)

利用前綴和與當前最大值比較選出最大的altitude;
*/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude  = 0;
        int ans = 0;
        for(auto i : gain){
            altitude+=i;
            ans = max(ans,altitude);
        }
        return ans;
    }
};

auto init=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();