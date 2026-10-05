class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        
        unordered_map<char, int> required;

        for (char c : licensePlate) {
            if (isalpha(c)) {
                c = tolower(c);
                required[c]++;
            }
        }

        string answer = "";

        for (string word : words) {

            unordered_map<char, int> freq;

            for (char c : word) {
                freq[c]++;
            }

            bool complete = true;

            for (auto [ch, count] : required) {
                if (freq[ch] < count) {
                    complete = false;
                    break;
                }
            }

            if (complete) {
                if (answer.empty() || word.length() < answer.length()) {
                    answer = word;
                }
            }
        }

        return answer;
    }
};