#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[8][8];
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
bool backtrack(int x, int y, int step)
{
  if (step == n * m)
    return true;
  for (int i = 0; i < 8; i++)
  {
    int u = x + dx[i];
    int v = y + dy[i];
    if (u >= 1 && u <= n && v >= 1 && v <= m && a[u][v] == 0)
    {
      a[u][v] = step + 1;
      if (backtrack(u, v, step + 1))
        return true;
      a[u][v] = 0;
    }
  }
  return false;
}
int main()
{
  cin.tie(nullptr)->sync_with_stdio(0);
  cin >> n >> m;
  for (int x = 1; x <= n; x++)
  {
    for (int y = 1; y <= m; y++)
    {
      memset(a, 0, sizeof(a));
      a[x][y] = 1;
      if (backtrack(x, y, 1))
      {
        for (int i = 1; i <= n; i++)
        {
          for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
          cout << endl;
        }
        return 0;
      }
    }
  }
  return 0;
}
