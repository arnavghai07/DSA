class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_set<string> ban;

        for (string word : banned) {
            ban.insert(word);
        }

        unordered_map<string, int> freq;

        for (char &c : paragraph) {
            if (ispunct(c)) {
                c = ' ';
            }
            c = tolower(c);
        }

        stringstream ss(paragraph);
        string word;

        while (ss >> word) {

            if (ban.count(word)) {
                continue;
            }

            freq[word]++;
        }

        string answer = "";
        int maxFreq = 0;

        for (auto &[word, count] : freq) {
            if (count > maxFreq) {
                maxFreq = count;
                answer = word;
            }
        }

        return answer;
    }
};