class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int, greater<int>> freq;
        vector<int> mostFreq;
        vector<pair<int, int>> res;
        for (auto n : nums) {
            freq[n]++;
        }
        for (auto f : freq) {
            res.push_back(f);
        }
        sort(res.begin(), res.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.second > b.second;
        });
        int count = 0;
        for (auto r : res) {
            if (count < k) {
                mostFreq.push_back(r.first);
                count++;
            } else {
                break;
            }
        }
        return mostFreq;
    }
};
