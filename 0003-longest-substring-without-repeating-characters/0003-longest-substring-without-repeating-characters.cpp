class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.length(), left = 0, maxLen = 0;
        set<int> chars;
        for(int right = 0 ; right < size ; right++) {

            while(chars.contains(s[right])) {
                chars.erase(s[left]);
                left++;
            }

            chars.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};