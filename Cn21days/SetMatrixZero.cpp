#include <bits/stdc++.h>
void change(vector<vector<int>> &matrix, int row, int col)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    for (int i = 0; i < rows; i++)
        matrix[i][col] = 0;
    for (int j = 0; j < cols; j++)
        matrix[row][j] = 0;
    return;
}
void setZeros(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<pair<int, int>> indexes;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (matrix[i][j] == 0)
                indexes.push_back({i, j});
    for (auto i : indexes)
        change(matrix, i.first, i.second);
    return;
}