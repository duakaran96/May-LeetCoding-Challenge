class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        vector<vector<int>> graph(N, vector<int>(N,0) );
        
        for (int i = 0; i < trust.size(); i++)
            graph[trust[i][0]-1][trust[i][1]-1] = 1;
        
        vector<int> in(N,0), out(N,-1*N);
        for (int i = 0; i < N; i++)
            for (int j = 0;j < N; j++) {
                in[i] += graph[j][i];
                out[i] += graph[i][j];
            }
        
        for (int i = 0; i < N; i++)
            if(in[i] == N-1 and out[i] == -1*N)
                return i+1;
        return -1;
    }
};
