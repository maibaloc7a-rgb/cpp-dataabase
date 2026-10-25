#include <bits/stdc++.h>
using namespace std;
int n, k, a[15], ans[15], sum[15];
int target;
bool backtrack(int so)
{
  if (so == n + 1)
  {
    for (int i = 1; i <= k; i++)
      if (sum[i] != target)
        return false;
    return true;
  }
  for (int i = 1; i <= k; i++)
    if (sum[i] + a[so] <= target)
    {
      sum[i] += a[so];
      ans[so] = i;
      if (backtrack(so + 1))
        return true;
      sum[i] -= a[so];
    }
  return false;
}
int main()
{
  cin.tie(nullptr)->sync_with_stdio(0);
  cin >> n >> k;
  int total = 0;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    total += a[i];
  }
  if (total % k != 0)
  {
    cout << "ze";
    return 0;
  }
  target = total / k;
  if (backtrack(1))
    for (int i = 1; i <= n; i++)
      cout << ans[i] << " ";
  else
    cout << "ze";
  return 0;
}
