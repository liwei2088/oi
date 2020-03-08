/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
    int getValue(char ch) {
        switch (ch) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }

   public:
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            int lt = getValue(s[i]), rt = getValue(s[i + 1]);
            if (lt < rt)
                ans -= lt;
            else
                ans += lt;
        }
        ans += getValue(s[s.size() - 1]);
        return ans;
    }
};
// @lc code=end
