int nodeLevel(int V, vector<int> adj[], int X)
{
    vector<bool> visited(V, false);
    queue<int> q;
    // Use a vector maintain level values of each node.
    // Initially all nodes have level value '-1'.
    vector<int> level(V, -1);

    // BFS Traversal
    // Push the root node into the queue to start with BFS.
    visited[0] = true;
    level[0] = 0;
    q.push(0);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                visited[it] = true;
                /*Assign one level higher value
                  'L+1' to the child node with
                  respect to the parent node at
                  level 'L'.
                */
                level[it] = level[node] + 1;
                q.push(it);
            }
        }
    }
    // If a node with value 'X' is found
    // then it's level value is returned else
    // the default level value of -1 is returned.
    return level[X];
}