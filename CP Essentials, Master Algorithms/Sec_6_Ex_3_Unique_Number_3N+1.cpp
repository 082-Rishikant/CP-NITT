#include <bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

int singleNumber(vector<int> &nums)
{
  int n = nums.size();
  int ans = 0;
  for (int j = 0; j < 32; j++)
  {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if ((nums[i] & (1 << j)) != 0)
      {
        count++;
      }
    }
    int p = pow(2, j);
    ans = ans + (count % 3) * p;
  }
  return ans;
}

void solve()
{
  int n;
  cin >> n;
  vector<int> nums;
  for (int i = 0; i < n; i++)
  {
    int ip;
    cin >> ip;
    nums.push_back(ip);
  }
  cout << singleNumber(nums);
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