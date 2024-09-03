class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return 0;
        }
        vector<int> freq1(26, 0), freq2(26, 0);
        unordered_set<char> uniqueChars1, uniqueChars2;

        for (char c : word1) {
            freq1[c-'a']++;
            uniqueChars1.insert(c);
        }

        for (char c : word2) {
            freq2[c - 'a']++;
            uniqueChars2.insert(c);
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2 && uniqueChars1 == uniqueChars2;
    }
};
