class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector<string> morse = {
            ".-", "-...", "-.-.", "-..", ".", "..-.",
            "--.", "....", "..", ".---", "-.-", ".-..",
            "--", "-.", "---", ".--.", "--.-", ".-.",
            "...", "-", "..-", "...-", ".--", "-..-",
            "-.--", "--.."
        };

        unordered_set<string> unique;

        for (string word : words) {

            string transformation = "";

            for (char c : word) {
                transformation += morse[c - 'a'];
            }

            unique.insert(transformation);
        }

        return unique.size();
    }
};