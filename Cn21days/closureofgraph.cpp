class Solution
{
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        // Initialize the solution matrix (tc) same as the input graph matrix
        vector<vector<int>> tc(N, vector<int>(N));

        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                tc[i][j] = graph[i][j];

        // Set the diagonal to 1, as each vertex is reachable from itself
        for (int i = 0; i < N; i++)
            tc[i][i] = 1;

        // Consider each vertex and update the tc matrix value if there's a path
        for (int k = 0; k < N; k++)
        {
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    // Update the value of tc[i][j] as true if there's a path from i to j
                    tc[i][j] = tc[i][j] || (tc[i][k] && tc[k][j]);
                }
            }
        }

        return tc;
    }
};