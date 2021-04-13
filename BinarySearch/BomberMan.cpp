int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    vector<bool> row(n, false);
    vector<bool> col(m, false);

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (matrix[i][j] == 1)
                row[i] = true,
                col[j] = true;
        }
    }

    int rowCount = 0;
    for (auto i: row)
        if (!i)
            rowCount++;

    int colCount = 0;
    for (auto i: col)
        if (!i)
            colCount++;

    return (rowCount * colCount);
}