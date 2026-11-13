class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> mp;
        int maxx = 0;
        string temp = "";
        string word = "";

        for (char c : paragraph) {
            if (isalpha(c)) {
                word += tolower(c);
            } else {
                if (!word.empty()) {
                    mp[word]++;
                    word = "";
                }
            }
        }

        if (!word.empty()) {
            mp[word]++;
        }

        for (auto it : mp) {
            bool isBanned = false;

            for (auto b : banned) {
                if (it.first == b) {
                    isBanned = true;
                    break;
                }
            }

            if (isBanned) continue;

            if (it.second > maxx) {
                maxx = it.second;
                temp = it.first;
            }
        }

        return temp;
    }
};