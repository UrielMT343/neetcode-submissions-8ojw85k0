class Solution {
public:
    vector<int> sizes;
    string encode(vector<string>& strs) {
        string res;
        for (string s : strs) {
            res += s;
            sizes.push_back(s.size());
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int first = 0;
        for (int i = 0; i < sizes.size(); i++) {
            int index = first + sizes[i];
            string sub = s.substr(first, sizes[i]);
            res.push_back(sub);
            first = index;
        }
        return res;
    }
};
