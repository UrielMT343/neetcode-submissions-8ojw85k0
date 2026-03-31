class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int w = 0;
        unordered_set<char> charSet;

        for (int i = 0; i < s.size(); i++) {
            while (charSet.find(s[i]) != charSet.end()) {
                charSet.erase(s[w]);
                w++;
            }
            charSet.insert(s[i]);
            longest = max(longest, (int)charSet.size());
        }

        return longest;
    }
};
