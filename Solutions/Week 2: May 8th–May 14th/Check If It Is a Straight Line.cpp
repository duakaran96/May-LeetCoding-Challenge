class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if (coordinates.size() == 2)
            return true;
        else if (coordinates[0][0] == coordinates[1][0]) {
            int x = coordinates[1][0];
            for (int i = 0; i < coordinates.size(); i++) {
                if (coordinates[i][0] != x)
                    return false;
            }
        }
        else if (coordinates[0][1] == coordinates[1][1]) {
            int x = coordinates[1][1];
            for (int i = 0; i < coordinates.size(); i++) {
                if (coordinates[i][1] != x)
                    return false;
            }
        }
        else {
            int x1 = coordinates[0][0];
            int y1 = coordinates[0][1];
            float m = (coordinates[1][1] - y1) / (coordinates[1][0] - x1);
            for(int i = 2; i < coordinates.size(); i++) {
                float m2 = (float)(coordinates[i][1] - y1) / (coordinates[i][0] - x1);
                if (m2 != m)
                    return false;
            }
        }
        return true;
    }
};
