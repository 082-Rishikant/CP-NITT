#include <bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

void moveRw(int rw, vector<vector<int>> &grid, int m, int n)
{
	for (int col = 0; col < n; col++)
	{
		grid[rw][col] = abs((grid[rw][col])-1);
	}
}
void moveCol(int col, vector<vector<int>> &grid, int m, int n)
{
	for (int rw = 0; rw < m; rw++)
	{
		grid[rw][col] = abs((grid[rw][col])-1);
	}
}

int calculateSum(vector<vector<int>> grid, int m, int n)
{
	int ans = 0;
	for (int rw = 0; rw < m; rw++)
	{
		int p = 1;
		for (int col = n - 1; col >= 0; col--)
		{
			ans = ans + grid[rw][col] * p;
			p = p * 2;
		}
	}
	return ans;
}

int matrixScore(vector<vector<int>> grid)
{
	int m = grid.size();
	int n = grid[0].size();
	for (int rw = 0; rw < m; rw++)
	{
		if (grid[rw][0] == 0)
		{
			moveRw(rw, grid, m, n);
		}
	}
	for (int col = 0; col < n; col++)
	{
		int cnt = 0;
		for (int rw = 0; rw < m; rw++)
		{
			if (grid[rw][col] == 0)
			{
				cnt++;
			}
		}
		if (cnt > (m / 2))
		{
			moveCol(col, grid, m, n);
		}
	}
	return calculateSum(grid, m, n);
}

void solve()
{
	vector<vector<int>> grid = {{1, 0, 1, 1}, {0, 1, 0, 1}, {0, 0, 1, 1}};
	cout << matrixScore(grid);
	return;
}

int32_t main() //1e9=2^31
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	//cin>>t;
	while (t--)
		solve();

	return 0;
}