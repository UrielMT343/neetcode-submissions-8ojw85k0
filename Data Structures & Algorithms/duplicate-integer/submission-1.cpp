class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (auto n : nums) {
            auto it = set.find(n);
            if (it != set.end()) {
                return true;
            }
            set.insert(n);
        }
        return false;
    }
};