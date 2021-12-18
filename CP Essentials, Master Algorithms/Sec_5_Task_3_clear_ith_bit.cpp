#include<bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

void solve()
{
  int n;int k;
  cin>>n>>k;
  int mask=~(1<<k);
  cout<<(mask & n);
}

int32_t main() //1e9=2^31
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    //cin>>t;
    while(t--)solve();
    
    return 0;
}