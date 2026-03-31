class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> sMap, tMap;
        for (auto i : s) sMap[i]++;
        for (auto i : t) tMap[i]++;
        return tMap == sMap;
    }
};
