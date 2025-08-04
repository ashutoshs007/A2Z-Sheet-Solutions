class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(128, 0);
        for (char ch : s) {
            freq[ch]++;
        }

        auto comp = [&](char a, char b) {
            if (freq[a] == freq[b]) return a>b;
            else return freq[a] > freq[b];
        };

        sort(s.begin(), s.end(), comp);  // ✅ fixed here
        return s;
    }
};
