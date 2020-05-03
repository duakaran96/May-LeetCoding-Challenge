class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> jewels;
        int stonesJewels = 0;
        for (char ch : J)
            jewels.insert(ch);
        for (char ch : S)
            if (jewels.find(ch) != jewels.end())
                stonesJewels++;
        return stonesJewels;
    }
};
