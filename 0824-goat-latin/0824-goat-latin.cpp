class Solution {
public:
    bool isvowel(char ch) {
        ch = tolower(ch);

        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }

    string toGoatLatin(string sentence) {

        stringstream ss(sentence);

        string word;
        string ans;
        int count = 1;

        while (ss >> word) {

            if (!isvowel(word[0])) {
                char first = word[0];
                word.erase(0, 1);
                word += first;
            }

            word += "ma";

            word += string(count, 'a');

            if (!ans.empty()) {
                ans += " ";
            }

            ans += word;

            count++;
        }

        return ans;
    }
};