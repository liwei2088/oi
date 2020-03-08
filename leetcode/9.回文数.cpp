/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
   public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int s = 0;
        while (x > s) {
            s = s * 10 + x % 10;
            x /= 10;
        }
        return s == x || x == s / 10;
    }
};
// @lc code=end
