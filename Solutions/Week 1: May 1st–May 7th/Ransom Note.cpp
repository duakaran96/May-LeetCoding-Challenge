class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransom[26] = {0};
        int mag[26] = {0};
        for (char ch : magazine)
            mag[ch - 97]++;
        for (char ch : ransomNote) {
            ransom[ch - 97]++;
            if (mag[ch - 97] < ransom[ch - 97])
                return false;
        }
        return true;
    }
};
