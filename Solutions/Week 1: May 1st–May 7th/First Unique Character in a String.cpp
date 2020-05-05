class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        for(char ch : s)
            freq[ch - 97]++;
        for(int i = 0; i < s.length(); i++)
            if(freq[s[i] - 97] == 1)
                return i;
        return - 1;
    }
};
