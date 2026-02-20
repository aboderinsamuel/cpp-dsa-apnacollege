/* BFS -- visits all nodes at distances 0, then 1, then 2 then ...etc
 * DFS -- follows a path as far as possible, then backtracks and explores other paths
 *
 * BFS uses queue (FIFO)
 * DFS uses recursion(implicit stack) or an explicit stack(LIFO)
 *
 * Time and Space Complexity (Graphs with V vertices and E edges)
 *
 * Time:
 * Time both run on O(V+E) each vertex and edge is processed a constant number of times
 *
 * Space:
 * BFS: O(v)
 * DFS(recursive) : O(v) worst case recursion depth(stack)
 * DFS(iterative): O(V) for the explicit stack
 *
 */
// BFS
#include <iostream>
#include <vector>
#include <queue>


using namespace std;
void bfs(int start, const vector<vector<int>>& adj) {
    int n = adj.size();   // no. of nodes (0...n-1)
    vector<bool> visited(n, false); //visited marker
    queue<int> q;  // FIFO queue for BFS, queue stores who to visit

    q.push(start);   //start from the first node
    visited[start] = true; //mark as visited

    while (!q.empty()) { // keep going untill nobody left
        int node = q.front();
        q.pop(); //take nest person from the queue
        //process u (eg print or record u)
        for (int neighbor : adj[node])  //Check all connected nodes
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor); // if not visited, add to queue
            }
        }
    }
}

void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;   // mark current node as visited
    // process for neighbour
    for (int neighbor : adj[node]) {  //for each neighbour
        if (!visited[neighbor]) dfs(neighbor, adj, visited); //if not visited, explore deeply
    }
}
// To call:
int n = adj.size();
vector<bool> visited(n, false);
dfs(start, adj, visited);