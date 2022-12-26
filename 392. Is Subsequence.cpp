class Solution {
public:
    bool is_subsequence(string string1, string string2) {
        int i = 0;
        int j = 0;

        while (i < string1.length() && j < string2.length()) {
            if (string1[i] == string2[j]) {
                j++;
            }
            i++;
        }

        return j == string2.length();
    }
    bool isSubsequence(string s, string t) {
        return is_subsequence(t, s);
    }
};
