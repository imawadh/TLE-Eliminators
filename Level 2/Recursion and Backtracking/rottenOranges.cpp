#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int orangesRotting(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    queue<pair<int, int>> q;

    // Push all rotten oranges (value 2) into the queue.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 2) {
                q.push({i, j});
            }
        }
    }

    // Directions for adjacent cells (up, down, left, right).
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    int minutes = 0;
    while (!q.empty()) {
        int size = q.size();
        bool newRottenOrange = false; // To check if new oranges get rotten in this minute.

        for (int i = 0; i < size; i++) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            // Check all four directions.
            for (auto dir : directions) {
                int nr = r + dir.first;
                int nc = c + dir.second;
                
                // Make sure the new position is within bounds.
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && mat[nr][nc] == 1) {
                    // Rot the fresh orange.
                    mat[nr][nc] = 2;
                    q.push({nr, nc});
                    newRottenOrange = true;
                }
            }
        }

        // If we had any new rotten oranges, increase the minute count.
        if (newRottenOrange) {
            minutes++;
        }
    }

    // After BFS, check if there are any fresh oranges left.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 1) {
                return -1; // There are still fresh oranges left, so return -1.
            }
        }
    }

    return minutes;
}
