DFS CODE C++
#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            DFS(neighbor, adj, visited);
        }
    }
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);

    // Undirected graph edges
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0};
    adj[3] = {1};
    adj[4] = {1};

    vector<bool> visited(V, false);

    cout << "DFS Traversal: ";
    DFS(0, adj, visited);

    return 0;
}
