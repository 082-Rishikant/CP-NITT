#include <bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;
vector<vector<int>> adjl;
set<int> vis;
vector<vector<int>> dist;

int travel(int root)
{
  vis.insert(root);
  if(vis.size()==adjl.size())
  {
    vis.erase(root);
    return dist[root][1];
  }
  else
  {
    int cost=0, ans=INT_MAX;
    for(auto it:adjl[root])
    {
      if(vis.find(it)==vis.end())
      {
        cost=travel(it)+dist[root][it];
        ans=min(ans, cost);
      }
    }
    vis.erase(root);
    return ans;
  }
}

void solve()
{
  // 1,2,3,4
  adjl = { {1, 2, 3},
           {0, 2, 3},
           {1, 0, 3},
           {1, 2, 0}
  };

  dist = { {0, 20, 45, 25},
           {20, 0, 30, 34},
           {45, 30, 0, 10},
           {25, 34, 10, 0}
  };
  cout << travel(1);
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