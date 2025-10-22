class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++)
            freq[s[i]]++;

        priority_queue<pair<int, char>> pq; //max-heap

        for (auto it : freq) {
            pq.push({it.second, it.first});
        }
        string ans = "";
        while (!pq.empty()) {
            ans += string(pq.top().first, pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
