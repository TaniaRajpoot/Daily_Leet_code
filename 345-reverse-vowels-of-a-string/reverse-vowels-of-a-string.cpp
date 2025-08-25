class Solution {
public:
    bool isVowel(char a) {
        return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
                a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');
    }

    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            if (!isVowel(s[i])) {
                i++;
            } else if (!isVowel(s[j])) {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};
