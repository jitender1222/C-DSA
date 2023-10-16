class Solution
{

public:
    int largestIsland(vector<vector<int>> &grid)
    {

        int n = grid.size();

        int maxArea = 0;

        vector<vector<int>> visited(n, vector<int>(n, 0));

        vector<vector<int>> islandIds(n, vector<int>(n, -1));

        int currentIslandId = 0;

        vector<int> islandSizes(n * n + 1, 0); // 0-indexed

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {

                if (grid[i][j] == 1 && islandIds[i][j] == -1)
                {

                    int area = exploreIsland(grid, visited, islandIds, i, j, currentIslandId);

                    islandSizes[currentIslandId] = area;

                    maxArea = max(maxArea, area);

                    currentIslandId++;
                }
            }
        }

        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {

                if (grid[i][j] == 0)
                {

                    set<int> neighborIslands;

                    for (auto &dir : directions)
                    {

                        int x = i + dir[0];

                        int y = j + dir[1];

                        if (x >= 0 && x < n && y >= 0 && y < n && islandIds[x][y] != -1)
                        {

                            neighborIslands.insert(islandIds[x][y]);
                        }
                    }

                    int newArea = 1;

                    for (int id : neighborIslands)
                    {

                        newArea += islandSizes[id];
                    }

                    maxArea = max(maxArea, newArea);
                }
            }
        }

        return maxArea;
    }

    int exploreIsland(vector<vector<int>> &grid, vector<vector<int>> &visited, vector<vector<int>> &islandIds, int i, int j, int currentIslandId)
    {

        int n = grid.size();

        if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] == 0 || visited[i][j] == 1)
        {

            return 0;
        }

        visited[i][j] = 1;

        islandIds[i][j] = currentIslandId;

        int area = 1;

        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        for (auto &dir : directions)
        {

            int x = i + dir[0];

            int y = j + dir[1];

            area += exploreIsland(grid, visited, islandIds, x, y, currentIslandId);
        }

        return area;
    }
};