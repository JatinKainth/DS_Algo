class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> str;
        int max_count = 0;
        int l = 0, r = 0;
        
        while (r < s.length()) {
            str[s[r]]++;
            
            while (str[s[r]] > 1) {
                str[s[l]]--;
                l++;
            }
            max_count = max(max_count, r-l+1);
            r++;
        }
        return max_count;
    }
};