#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 1000005;

int n, m;
char grid[MAXN];
bool visited[MAXN];

vector<int> adj[MAXN];

int dfs(int u) {
    visited[u] = true;
    int size = 1;
    for (int v : adj[u]) {
        if (!visited[v] && grid[v] == '#') {
            size += dfs(v);
        }
    }
    return size;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n * m; ++i) {
            adj[i].clear();
            visited[i] = false;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i * m + j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int u = i * m + j;
                if (grid[u] == '#') {
                    if (j > 0 && grid[u - 1] == '#') {
                        adj[u].push_back(u - 1);
                        adj[u - 1].push_back(u);
                    }
                    if (j < m - 1 && grid[u + 1] == '#') {
                        adj[u].push_back(u + 1);
                        adj[u + 1].push_back(u);
                    }
                    if (i > 0 && grid[u - m] == '#') {
                        adj[u].push_back(u - m);
                        adj[u - m].push_back(u);
                    }
                    if (i < n - 1 && grid[u + m] == '#') {
                        adj[u].push_back(u + m);
                        adj[u + m].push_back(u);
                    }
                }
            }
        }
        int max_component_size = 0;
        // Try setting each row to '#' and calculate the maximum component size
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int u = i * m + j;
                if (grid[u] == '.') {
                    grid[u] = '#';
                    for (int k = 0; k < n * m; ++k) {
                        visited[k] = false;
                    }
                    int component_size = dfs(u);
                    max_component_size = max(max_component_size, component_size);
                    grid[u] = '.'; // Reset for the next iteration
                }
            }
        }
        // Try setting each column to '#' and calculate the maximum component size
        for (int j = 0; j < m; ++j) {
            for (int i = 0; i < n; ++i) {
                int u = i * m + j;
                if (grid[u] == '.') {
                    grid[u] = '#';
                    for (int k = 0; k < n * m; ++k) {
                        visited[k] = false;
                    }
                    int component_size = dfs(u);
                    max_component_size = max(max_component_size, component_size);
                    grid[u] = '.'; // Reset for the next iteration
                }
            }
        }
        cout << max_component_size << endl;
    }
    return 0;
}
