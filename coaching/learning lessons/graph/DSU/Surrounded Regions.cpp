class Solution {
public:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int n, m;
    vector<vector<int>> vis;
    vector<vector<char>> graph;
    void dfs(int x, int y) {
        vis[x][y] = 1;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && graph[nx][ny]=='O') {
                if (!vis[nx][ny]) {
                    dfs(nx, ny);
                }
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        n = board.size();
        if (n == 0) return;
        m = board[0].size();
        vis = vector<vector<int>>(n, vector<int>(m, 0));
        graph = board;
        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O') dfs(0, j);
            if (board[n - 1][j] == 'O') dfs(n - 1, j);
        }

        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O') dfs(i, 0);
            if (board[i][m - 1] == 'O') dfs(i, m - 1);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
